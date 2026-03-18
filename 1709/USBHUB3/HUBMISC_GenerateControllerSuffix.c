/*
 * XREFs of HUBMISC_GenerateControllerSuffix @ 0x1C002B820
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C00141E0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBID_BuildClassCompatibleID @ 0x1C00183EC (HUBID_BuildClassCompatibleID.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     RtlStringCbPrintfW @ 0x1C0010794 (RtlStringCbPrintfW.c)
 *     WPP_RECORDER_SF_H @ 0x1C00263D4 (WPP_RECORDER_SF_H.c)
 *     WPP_RECORDER_SF_HH @ 0x1C0026478 (WPP_RECORDER_SF_HH.c)
 *     memmove @ 0x1C0038E80 (memmove.c)
 */

__int64 __fastcall HUBMISC_GenerateControllerSuffix(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  const void **v6; // rdi
  unsigned __int16 v7; // ax
  unsigned int v8; // edi
  int v9; // edx
  __int64 v10; // rbp
  int v11; // r9d
  unsigned __int16 v12; // r8
  unsigned __int64 v13; // rcx
  NTSTATUS v14; // eax
  int v16; // [rsp+20h] [rbp-38h]

  *(_WORD *)a2 = 0;
  if ( *(_DWORD *)(*a1 + 160LL) == 3 && (v6 = *(const void ***)(*a1 + 168LL), *(_WORD *)v6) )
  {
    v7 = *(_WORD *)(a2 + 2) - 2;
    if ( v7 > 4u )
    {
      v9 = *(unsigned __int16 *)v6;
      v10 = v7;
      v11 = v7 - 4;
      if ( v9 >= v11 )
      {
        LOWORD(v9) = v7 - 4;
      }
      else
      {
        v12 = *(_WORD *)v6;
        do
        {
          v13 = v12;
          v12 += 2;
          *(_WORD *)(*(_QWORD *)(a2 + 8) + 2 * (v13 >> 1)) = 48;
        }
        while ( v12 < v11 );
      }
      memmove(*(void **)(a2 + 8), v6[1], (unsigned __int16)v9);
      v14 = RtlStringCbPrintfW(
              (NTSTRSAFE_PWSTR)(*(_QWORD *)(a2 + 8) + 2 * ((unsigned __int64)(v10 - 4) >> 1)),
              6uLL,
              L"%02X",
              *(unsigned __int16 *)v6);
      v8 = v14;
      if ( v14 >= 0 )
        *(_WORD *)a2 = *(_WORD *)(a2 + 2) - 2;
      else
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1[1] + 1432LL),
          2u,
          5u,
          0x79u,
          (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
          v14);
    }
    else
    {
      WPP_RECORDER_SF_HH(*(_QWORD *)(a1[1] + 1432LL), a2, a3, a4, v16);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    WPP_RECORDER_SF_H(*(_QWORD *)(a1[1] + 1432LL), a2, a3, a4, v16);
    return (unsigned int)-1073741275;
  }
  return v8;
}
