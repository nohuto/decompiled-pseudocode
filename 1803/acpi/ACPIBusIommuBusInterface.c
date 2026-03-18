/*
 * XREFs of ACPIBusIommuBusInterface @ 0x1C007CC94
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0013E10 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C0009444 (ACPIAmliBuildObjectPathname.c)
 */

__int64 __fastcall ACPIBusIommuBusInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // r15
  _BYTE *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rax
  SIZE_T v9; // r14
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rsi
  void (__fastcall *v12)(_DWORD *); // rax
  void *Src; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 712);
  if ( v3 )
  {
    if ( *(_WORD *)(v2 + 16) >= 0x48u && *(_WORD *)(v2 + 18) )
    {
      v5 = *(_QWORD *)(v2 + 24);
      v4 = ACPIAmliBuildObjectPathname(v3, (char **)&Src, 3);
      if ( v4 >= 0 )
      {
        v6 = Src;
        v7 = -1LL;
        v8 = -1LL;
        do
          ++v8;
        while ( *((_BYTE *)Src + v8) );
        v9 = (unsigned int)(v8 + 105);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x46706341u);
        v11 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v9);
          v11[20] = 2;
          *((_QWORD *)v11 + 11) = v11 + 26;
          do
            ++v7;
          while ( v6[v7] );
          memmove(v11 + 26, v6, v7 + 1);
          ExFreePoolWithTag(v6, 0x53706341u);
          *(_OWORD *)v5 = AcpiIommuBusInterface;
          *(_OWORD *)(v5 + 16) = *(_OWORD *)&off_1C00591B0;
          *(_OWORD *)(v5 + 32) = xmmword_1C00591C0;
          *(_OWORD *)(v5 + 48) = unk_1C00591D0;
          *(_QWORD *)(v5 + 64) = ACPIIommuGetDeviceId;
          v12 = *(void (__fastcall **)(_DWORD *))(v5 + 16);
          *(_QWORD *)(v5 + 8) = v11;
          v12(v11);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v4;
}
