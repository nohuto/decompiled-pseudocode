/*
 * XREFs of ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0004A98
 * Callers:
 *     VidSchSubmitCommandContextless @ 0x1C002C1E0 (VidSchSubmitCommandContextless.c)
 *     VidSchSubmitCommand @ 0x1C006E3C0 (VidSchSubmitCommand.c)
 * Callees:
 *     VidSchiSetFlipDevice @ 0x1C0004150 (VidSchiSetFlipDevice.c)
 *     VidSchiUpdatePresentParameters @ 0x1C00044A0 (VidSchiUpdatePresentParameters.c)
 */

__int64 __fastcall VidSchValidatePresentFlags(
        struct VIDSCH_SUBMIT_DATA2 *a1,
        struct _VIDSCH_DEVICE *a2,
        struct _VIDSCH_SUBMIT_FLAGS *a3)
{
  int v3; // r9d
  struct _VIDSCH_GLOBAL *v5; // r14
  int v7; // eax
  int v9; // r9d
  int v11; // ebx
  unsigned int v12; // r9d
  int v13; // r9d
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax

  v3 = *(_DWORD *)a3;
  v5 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a2 + 4);
  v7 = *((_DWORD *)a2 + 116);
  if ( (*(_DWORD *)a3 & 0x40) == 0 )
  {
    if ( v7 == -1 )
    {
      v9 = v3 | 0x7000;
    }
    else
    {
      if ( v7 != *((_DWORD *)a1 + 29) )
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdAssertion();
        v15[3] = v5;
        v15[4] = a2;
        v15[5] = *((unsigned int *)a1 + 29);
        v15[6] = *((unsigned int *)a2 + 116);
        WdLogEvent5_WdAssertion(v15);
        goto LABEL_5;
      }
      v9 = v3 | 0x4000;
    }
    *(_DWORD *)a3 = v9;
LABEL_5:
    *((_DWORD *)a2 + 116) = -1;
    goto LABEL_6;
  }
  v12 = v3 & 0xFFFFFF7F;
  *(_DWORD *)a3 = v12;
  if ( v7 == -1 )
  {
    v13 = v12 | 0x1000;
    *((_DWORD *)a2 + 116) = *((_DWORD *)a1 + 29);
  }
  else
  {
    if ( v7 != *((_DWORD *)a1 + 29) )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdAssertion();
      v14[3] = v5;
      v14[4] = a2;
      v14[5] = *((unsigned int *)a1 + 29);
      v14[6] = *((unsigned int *)a2 + 116);
      WdLogEvent5_WdAssertion(v14);
      return 3221225485LL;
    }
    v13 = v12 | 0x2000;
  }
  *(_DWORD *)a3 = v13;
LABEL_6:
  if ( (*(_DWORD *)a3 & 4) == 0 )
    return 0LL;
  v11 = VidSchiSetFlipDevice(
          v5,
          *((_DWORD *)a1 + 29),
          (__int64)a2,
          *((_DWORD *)a1 + 30),
          9u,
          (*(_DWORD *)a1 & 0x20000000) != 0,
          0);
  if ( v11 >= 0 )
  {
    VidSchiUpdatePresentParameters((__int64)v5, (__int64)a1);
    return 0LL;
  }
  v16 = WdLogNewEntry5_WdWarning();
  WdLogEvent5_WdWarning(v16);
  return (unsigned int)v11;
}
