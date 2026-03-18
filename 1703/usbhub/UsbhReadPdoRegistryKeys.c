/*
 * XREFs of UsbhReadPdoRegistryKeys @ 0x1C001F300
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C0019630 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     UsbhGetD3Policy @ 0x1C001F1D8 (UsbhGetD3Policy.c)
 *     UsbhGetPdoRegistryParameter @ 0x1C001F424 (UsbhGetPdoRegistryParameter.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00289C0 (memset.c)
 */

__int64 __fastcall UsbhReadPdoRegistryKeys(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  char *v3; // rbx
  int v4; // eax
  int v5; // eax
  unsigned int i; // r14d
  PVOID PoolWithTag; // rax
  void *v9; // rdi
  unsigned int v10; // esi
  int v11; // [rsp+30h] [rbp-10h]
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+40h] BYREF
  int v14; // [rsp+88h] [rbp+48h] BYREF

  v12 = a1;
  v14 = 0;
  if ( PdoKeyValues )
  {
    v3 = (char *)&unk_1C005A5FC;
    do
    {
      v4 = *((_DWORD *)v3 - 1);
      v13 = 0;
      LODWORD(v12) = v4;
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 3 )
        {
          LOBYTE(v11) = *v3;
          if ( (int)UsbhGetPdoRegistryParameter(a2, *(_QWORD *)(v3 - 12), &v14, 4LL, &v12, &v13, v11) >= 0
            && v13 == 4
            && (_DWORD)v12 == 4
            && v14 )
          {
            (*(void (__fastcall **)(struct _DEVICE_OBJECT *, _QWORD, int *, __int64))(v3 + 12))(
              a2,
              *(_QWORD *)(v3 - 12),
              &v14,
              4LL);
          }
        }
      }
      else
      {
        for ( i = 8; ; i = v10 )
        {
          PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, i, 0x42554855u);
          v9 = PoolWithTag;
          if ( !PoolWithTag )
            break;
          memset(PoolWithTag, 0, i);
          LOBYTE(v11) = *v3;
          if ( (UsbhGetPdoRegistryParameter(a2, *(_QWORD *)(v3 - 12), v9, i, &v12, &v13, v11) & 0xC0000000) == 0xC0000000 )
            goto LABEL_11;
          if ( (_DWORD)v12 != 1 )
            goto LABEL_11;
          v10 = v13;
          if ( !v13 )
            goto LABEL_11;
          if ( v13 <= i )
          {
            (*(void (__fastcall **)(struct _DEVICE_OBJECT *, _QWORD, void *, _QWORD))(v3 + 12))(
              a2,
              *(_QWORD *)(v3 - 12),
              v9,
              v13);
LABEL_11:
            ExFreePoolWithTag(v9, 0);
            break;
          }
          ExFreePoolWithTag(v9, 0);
        }
      }
      v3 += 32;
    }
    while ( *(_QWORD *)(v3 - 12) );
  }
  UsbhGetD3Policy(a2);
  return 0LL;
}
