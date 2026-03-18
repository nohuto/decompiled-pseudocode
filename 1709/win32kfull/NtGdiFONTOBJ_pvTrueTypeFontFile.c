/*
 * XREFs of NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C028F880
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C00B9A64 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z @ 0x1C026FC60 (-FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z.c)
 */

void *__fastcall NtGdiFONTOBJ_pvTrueTypeFontFile(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // r14
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v8; // rdi
  void *v10; // rsi
  struct _FONTOBJ *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v14; // rbx
  unsigned int v15; // [rsp+60h] [rbp+18h] BYREF
  void *v16; // [rsp+68h] [rbp+20h] BYREF

  v4 = (_DWORD *)a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  v10 = 0LL;
  v11 = (struct _FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v11 )
  {
    v15 = *((_DWORD *)v8 + 94);
    v10 = (void *)*((_QWORD *)v8 + 46);
    if ( !v10 )
    {
      v10 = FONTOBJ_pvTrueTypeFontFileUMPD(v11, &v15, &v16);
      if ( v10 )
      {
        v14 = v16;
        *((_QWORD *)v8 + 48) = PsGetCurrentProcess(v13, v12);
        *((_QWORD *)v8 + 46) = v10;
        *((_QWORD *)v8 + 45) = v14;
        *((_DWORD *)v8 + 94) = v15;
      }
    }
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_DWORD *)MmUserProbeAddress;
    *v4 = v10 != 0LL ? v15 : 0;
  }
  if ( v8 )
    --*((_DWORD *)v8 + 108);
  return v10;
}
