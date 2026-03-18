/*
 * XREFs of PiDrvDbRegisterNode @ 0x140622A40
 * Callers:
 *     PiDrvDbInit @ 0x140622800 (PiDrvDbInit.c)
 *     PiDrvDbRegisterNodeCallback @ 0x140623F40 (PiDrvDbRegisterNodeCallback.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14009F42C (RtlStringCchPrintfW.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PiDrvDbCreateNode @ 0x140622B38 (PiDrvDbCreateNode.c)
 *     DrvDbRegisterDatabase @ 0x140623B54 (DrvDbRegisterDatabase.c)
 *     PiDrvDbDestroyNode @ 0x14073C7F4 (PiDrvDbDestroyNode.c)
 */

__int64 __fastcall PiDrvDbRegisterNode(const WCHAR *a1, char a2)
{
  int v3; // r15d
  wchar_t *PoolWithTag; // rsi
  int Node; // eax
  char *v6; // rbx
  int v7; // edi
  SIZE_T v8; // rdi
  int v9; // ecx
  int v10; // r8d
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  P = 0LL;
  v3 = (int)a1;
  PoolWithTag = 0LL;
  Node = PiDrvDbCreateNode(a1, (__int64)&P);
  v6 = (char *)P;
  v7 = Node;
  if ( Node >= 0 )
  {
    if ( (*((_DWORD *)P + 16) & 1) != 0 )
      goto LABEL_6;
    v8 = (unsigned int)*((unsigned __int16 *)P + 16) + 32;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v8, 0x62647050u);
    if ( !PoolWithTag )
    {
      v7 = -1073741670;
      goto LABEL_9;
    }
    v7 = RtlStringCchPrintfW(PoolWithTag, v8 >> 1, L"%wZ\\%ws", v6 + 32, L"DriverDatabase");
    if ( v7 >= 0 )
    {
      v7 = DrvDbRegisterDatabase(v9, v3, v10, (_DWORD)PoolWithTag, (a2 & 8) != 0);
      if ( v7 >= 0 )
LABEL_6:
        v6 = 0LL;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
LABEL_9:
  if ( v6 )
    PiDrvDbDestroyNode(v6);
  return (unsigned int)v7;
}
