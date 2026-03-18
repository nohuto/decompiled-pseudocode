/*
 * XREFs of IcAddSecondaryIcInstance @ 0x1C0083FA8
 * Callers:
 *     AcpiIrqLibConfigureLibrary @ 0x1C00AAC84 (AcpiIrqLibConfigureLibrary.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 IcAddSecondaryIcInstance()
{
  int v0; // esi
  int v1; // eax
  signed int v2; // ecx
  unsigned int v3; // ebx
  unsigned int v4; // eax
  unsigned int v5; // edx
  PVOID PoolWithTag; // rax
  __int64 v7; // rdi
  __int64 *v8; // rax
  _DWORD v10[16]; // [rsp+30h] [rbp-48h] BYREF
  int v11; // [rsp+80h] [rbp+8h] BYREF

  v0 = 0;
  v11 = 56;
  memset(v10, 0, 0x38uLL);
  v1 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, int *))HalDispatchTable->HalQuerySystemInformation)(
         28LL,
         56LL,
         v10,
         &v11);
  v2 = v1;
  if ( v1 < 0 )
  {
    v3 = v11;
  }
  else
  {
    v3 = v10[1];
    v0 = v10[2];
  }
  if ( v1 >= 0 )
  {
    if ( v0 && v3 )
    {
      v4 = v3 + v0;
      v5 = -1;
      if ( v3 + v0 >= v3 )
        v5 = v3 + v0;
      v2 = v4 < v3 ? 0xC0000095 : 0;
      if ( v4 >= v3 )
      {
        if ( v5 >= 0xFFF00000 )
          return (unsigned int)-1073741811;
        v2 = 0;
      }
    }
    else
    {
      v2 = -1073741811;
    }
    if ( v2 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(200 * (v0 - 1) + 232), 0x49706341u);
      v7 = (__int64)PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, (unsigned int)(200 * (v0 - 1) + 232));
        *(_DWORD *)(v7 + 16) = v3;
        *(_DWORD *)(v7 + 28) = 4;
        *(_DWORD *)(v7 + 20) = v3 + v0 - 1;
        v8 = (__int64 *)qword_1C0076528;
        if ( *(__int64 **)qword_1C0076528 != &IcListHead )
          __fastfail(3u);
        *(_QWORD *)v7 = &IcListHead;
        v2 = 0;
        *(_QWORD *)(v7 + 8) = v8;
        *v8 = v7;
        qword_1C0076528 = v7;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return (unsigned int)v2;
}
