/*
 * XREFs of ResCKeDirectoryOpenMapping @ 0x18001B394
 * Callers:
 *     ResCKeOpenRuntimeView @ 0x18001AFA0 (ResCKeOpenRuntimeView.c)
 *     ResCKeCreateRuntimeView @ 0x18010BBAC (ResCKeCreateRuntimeView.c)
 * Callees:
 *     _ResCMapCMFModule @ 0x18001B470 (_ResCMapCMFModule.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     ResCDirectoryCreateAndPopulate @ 0x18008EB14 (ResCDirectoryCreateAndPopulate.c)
 *     ResCDirectoryValidate @ 0x18010C768 (ResCDirectoryValidate.c)
 *     _ResUnmapViewOfFile @ 0x180110624 (_ResUnmapViewOfFile.c)
 */

__int64 __fastcall ResCKeDirectoryOpenMapping(int a1, __int64 a2, int a3, int a4, int a5, unsigned int *a6)
{
  unsigned int *v7; // r14
  int v8; // edx
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rbp
  unsigned int v15; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = 0;
  v15 = 0;
  v7 = a6;
  v8 = (a3 != 0 ? 18 : 16) | 4;
  if ( !a4 )
    v8 = a3 != 0 ? 18 : 16;
  v9 = v8 | 8;
  if ( !a5 )
    v9 = v8;
  if ( a6 )
    v15 = *a6;
  v10 = ResCMapCMFModule(v9, a1, (unsigned int)&v16, (unsigned int)&v15, (__int64)&a5);
  v11 = v10;
  if ( v7 )
    *v7 = v15 & 0xFFE8FFFF;
  if ( !v10 )
    return 0LL;
  if ( a1 >= 0 && a5 != a1 )
  {
LABEL_18:
    ResUnmapViewOfFile(v11);
    return 0LL;
  }
  v13 = ResCDirectoryCreateAndPopulate(v10, v16, 1LL);
  v14 = v13;
  if ( v13 )
  {
    if ( (v15 & 0x1C0000) == 0 )
    {
      if ( !(unsigned int)ResCDirectoryValidate(v13, v16) )
      {
        ResCMapCMFModule(v9 | 0x120000, a1, 0, 0, 0LL);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v14);
        goto LABEL_18;
      }
      ResCMapCMFModule(v9 | 0x60000, a1, 0, 0, 0LL);
    }
  }
  else
  {
    ResUnmapViewOfFile(v11);
  }
  return v14;
}
