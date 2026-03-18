/*
 * XREFs of MmVirtualAccessFault @ 0x1406E504C
 * Callers:
 *     VmpAccessFaultBatch @ 0x1402786D8 (VmpAccessFaultBatch.c)
 *     PspIumGetPhysicalPage @ 0x14071ABF4 (PspIumGetPhysicalPage.c)
 * Callees:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiInitializeFaultVaListCore @ 0x14021BA64 (MiInitializeFaultVaListCore.c)
 */

__int64 __fastcall MmVirtualAccessFault(__int64 a1, char a2, __int64 *a3, int *a4)
{
  ULONG_PTR v4; // r14
  unsigned __int64 v6; // r13
  int v7; // esi
  int v8; // r15d
  int v9; // r12d
  int v10; // edi
  __int64 v11; // r8
  ULONG_PTR v12; // r11
  int v13; // eax
  int v14; // r10d
  __int64 result; // rax
  __int64 v16; // rax
  bool v17; // zf
  int v18; // eax
  _QWORD v19[2]; // [rsp+20h] [rbp-49h] BYREF
  char v20[40]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v21; // [rsp+58h] [rbp-11h]
  int v22; // [rsp+60h] [rbp-9h]

  v19[1] = 4096LL;
  v4 = a2 & 2 | 0x10LL;
  if ( (a2 & 4) == 0 )
    v4 = a2 & 2;
  v6 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v19[0] = a1 & 0xFFFFFFFFFFFFF000uLL;
  v7 = (v4 >> 1) & 1 | (v4 >> 3) & 2;
  v8 = a2 & 0x10;
  v9 = a2 & 0x20;
  v10 = a2 & 0x40;
  while ( 1 )
  {
    MiInitializeFaultVaListCore((__int64)v20, (__int64)v19, 1LL, 5);
    v21 = -1LL;
    v13 = (v4 >> 1) & 1 | (v4 >> 3) & 2;
    v22 = v13;
    if ( v14 )
    {
      v13 = v7 | 4;
      v22 = v7 | 4;
    }
    if ( v8 )
    {
      v13 |= 8u;
      v22 = v13;
    }
    if ( v9 )
    {
      v13 |= 0x10u;
      v22 = v13;
    }
    if ( v10 )
      v22 = v13 | 0x20;
    result = MmAccessFault(v4, v6, v11, v12);
    if ( (int)result < 0 )
      break;
    v16 = v21;
    if ( v21 != -1 )
    {
      *a4 = 0;
      v17 = (v22 & 0x40) == 0;
      *a3 = v16;
      v18 = *a4;
      if ( !v17 )
        v18 = 2;
      v17 = (v22 & 0x80u) == 0;
      *a4 = v18;
      if ( !v17 )
        *a4 |= 4u;
      return 0LL;
    }
  }
  return result;
}
