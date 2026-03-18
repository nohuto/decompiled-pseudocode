/*
 * XREFs of NtGdiCLIPOBJ_bEnum @ 0x1C028D3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002D16C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C0139BB0 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z @ 0x1C026FFDC (--$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiCLIPOBJ_bEnum(__int64 a1, __int64 a2, char *a3, __int64 a4)
{
  unsigned int v5; // edi
  int v6; // esi
  unsigned int v8; // r15d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v11; // rbx
  unsigned __int64 v12; // rax
  XCLIPOBJ *v13; // r14
  char *v14; // rax
  char *v15; // rbp
  __int64 v16; // rdx
  unsigned int v18; // [rsp+68h] [rbp+20h] BYREF

  v5 = -1;
  v6 = -1;
  v8 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v11 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
  {
    v5 = 0;
    goto LABEL_16;
  }
  ++*((_DWORD *)ThreadCurrentObj + 108);
  v12 = UMPDOBJ::GetDDIOBJ<_CLIPOBJ>((__int64)ThreadCurrentObj, a1);
  v13 = (XCLIPOBJ *)v12;
  if ( !v12 )
    goto LABEL_15;
  if ( (*((_DWORD *)v11 + 103) & 0x100) == 0 || *(_QWORD *)(v12 + 56) )
  {
    if ( v8 <= 0x2710000 )
    {
      v14 = (char *)PALLOCMEM2(v8, 1886221639LL, 0);
      v15 = v14;
      if ( v14 )
      {
        v18 = 0;
        v6 = XCLIPOBJ::bEnum(v13, v8, v14, &v18);
        if ( v6 != -1 && !(unsigned int)bSafeCopyBits(a3, v15, v18) )
          v6 = -1;
        Win32FreePool(v15, v16);
      }
    }
LABEL_15:
    v5 = v6;
    goto LABEL_16;
  }
  if ( gfUMPDDebug )
    DbgPrint("windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiCLIPOBJ_bEnum:!peco->bValid()\n", 2604);
LABEL_16:
  if ( v11 )
    --*((_DWORD *)v11 + 108);
  return v5;
}
