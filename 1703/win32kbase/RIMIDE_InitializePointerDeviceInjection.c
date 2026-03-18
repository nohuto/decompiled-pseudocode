/*
 * XREFs of RIMIDE_InitializePointerDeviceInjection @ 0x1C010C594
 * Callers:
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C00E1FD0 (NtUserInitializePointerDeviceInjectionEx.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C0130584 (-CreateInjectionDevice@@YAHXZ.c)
 *     ?CreateInjectionDevice@CMouseAsTouchAdapter@@QEAAHXZ @ 0x1C0132620 (-CreateInjectionDevice@CMouseAsTouchAdapter@@QEAAHXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0109F10 (RIMIDECreatePseudoHIDDevice.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C010BD74 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 */

__int64 __fastcall RIMIDE_InitializePointerDeviceInjection(
        int a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 *a6)
{
  unsigned int v6; // esi
  unsigned int v11; // r11d
  __int16 v12; // r14
  char *v13; // rdx
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  unsigned int v16; // r10d
  char *v17; // rcx
  __int64 v18; // rax
  __int128 v19; // xmm1
  unsigned int v20; // ebx
  __int64 v21; // rax
  struct _HIDP_DEVICE_DESC v23; // [rsp+50h] [rbp-B0h] BYREF
  struct _HIDP_DEVICE_DESC Object; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v25[160]; // [rsp+D0h] [rbp-30h] BYREF
  char v26; // [rsp+170h] [rbp+70h] BYREF

  v6 = 0;
  if ( a6 )
    *a6 = 0LL;
  memmove(v25, &commonUsages, 0xA0uLL);
  v11 = 5;
  v12 = 2;
  if ( a1 == 2 )
  {
    v13 = (char *)&touchUsages;
    v14 = 12;
    v15 = 7;
    v12 = 4;
    v16 = 10;
  }
  else
  {
    if ( a1 != 3 )
      return 0LL;
    v13 = (char *)&penUsages;
    v14 = 11;
    v15 = 6;
    v16 = 1;
  }
  v17 = &v26;
  do
  {
    if ( v6 >= v15 )
      break;
    ++v11;
    v18 = 32LL * v6++;
    v19 = *(_OWORD *)&v13[v18 + 16];
    *(_OWORD *)v17 = *(_OWORD *)&v13[v18];
    *((_OWORD *)v17 + 1) = v19;
    v17 += 32;
  }
  while ( v11 < v14 );
  v20 = BuildReportDescriptor(0xDu, v12, (struct tagUSAGE_PROPERTIES *)v25, v14, v16);
  if ( v20 )
  {
    v23 = Object;
    v21 = RIMIDECreatePseudoHIDDevice(13, v12, a2, a4, a3, &Object, &v23, 0, a5, 0LL);
    if ( v21 )
      *a6 = v21;
    else
      return 0;
  }
  return v20;
}
