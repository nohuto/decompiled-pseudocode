/*
 * XREFs of UsbhValidateMsOs20DescriptorSet @ 0x1C0054584
 * Callers:
 *     UsbhSetupDevice @ 0x1C0022C90 (UsbhSetupDevice.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     UsbhGetNextMsOs20Descriptor @ 0x1C00408B4 (UsbhGetNextMsOs20Descriptor.c)
 */

char __fastcall UsbhValidateMsOs20DescriptorSet(__int64 a1, __int64 a2, unsigned int *a3)
{
  _DWORD *v5; // rax
  unsigned __int16 v6; // r9
  _DWORD *v7; // rdi
  char v8; // si
  unsigned __int16 v9; // cx
  unsigned __int16 *v10; // rdx
  int v11; // r8d
  unsigned __int16 v13; // ax
  unsigned int v14; // ecx
  unsigned __int64 v15; // rbp
  unsigned int v16; // r14d
  __int64 v17; // [rsp+20h] [rbp-28h]
  unsigned __int16 *v18; // [rsp+60h] [rbp+18h] BYREF

  v5 = PdoExt(a2);
  v6 = *((_WORD *)a3 + 2);
  v7 = v5;
  v8 = 1;
  v9 = *((_WORD *)v5 + 1410);
  v10 = (unsigned __int16 *)*((_QWORD *)v5 + 354);
  if ( v9 != v6 )
  {
    v11 = 1447907120;
    v17 = v6;
LABEL_3:
    Log(a1, 256, v11, v9, v17);
    return 0;
  }
  if ( v9 < 0xAu )
  {
    v17 = 0LL;
    v11 = 1447907121;
    goto LABEL_3;
  }
  if ( *v10 != 10 )
  {
    Log(a1, 256, 1447907122, *v10, 0LL);
    return 0;
  }
  v13 = v10[4];
  if ( v6 != v13 )
  {
    Log(a1, 256, 1447907123, v6, v13);
    return 0;
  }
  v14 = *((_DWORD *)v10 + 1);
  if ( v14 > *a3 )
  {
    Log(a1, 256, 1447907124, v14, *a3);
    return 0;
  }
  v15 = (unsigned __int64)v10 + v13;
  v18 = v10;
  do
  {
    v16 = v10[1];
    if ( v16 < 8 )
    {
      v8 = ((unsigned __int8 (__fastcall *)(__int64, _DWORD *, unsigned __int16 *, unsigned __int64))*(&MsOs20DispatchTable + 2 * v10[1]))(
             a1,
             v7 + 704,
             v10,
             v15) != 0
         ? v8
         : 0;
      if ( v16 - 1 > 1 && (v7[704] & 0x18) != 0 )
      {
        Log(a1, 256, 1447907125, 0LL, 0LL);
        v8 = 0;
      }
    }
    if ( !UsbhGetNextMsOs20Descriptor(v15, &v18) )
    {
      Log(a1, 256, 1447907126, 0LL, 0LL);
      v8 = 0;
    }
    v10 = v18;
  }
  while ( v18 );
  return v8;
}
