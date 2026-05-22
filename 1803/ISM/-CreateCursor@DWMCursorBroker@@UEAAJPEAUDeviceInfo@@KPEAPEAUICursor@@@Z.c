/*
 * XREFs of ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x18008A2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18008A9AC (-GetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCur.c)
 *     ?SetValueForKey@?$DynamicSizeMap@UDWMPointerMapping@@UCursorId@@$00@@QEAAJAEBUDWMPointerMapping@@AEBUCursorId@@@Z @ 0x18008A9F8 (-SetValueForKey@-$DynamicSizeMap@UDWMPointerMapping@@UCursorId@@$00@@QEAAJAEBUDWMPointerMapping@.c)
 *     ??0DWMCursor@@IEAA@PEAVDWMCursorBroker@@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@W4InputType@@UCursorId@@@Z @ 0x18008ABE4 (--0DWMCursor@@IEAA@PEAVDWMCursorBroker@@V-$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@W4InputT.c)
 *     ?Initialize@DWMCursor@@QEAAJ_N@Z @ 0x18008AE5C (-Initialize@DWMCursor@@QEAAJ_N@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::CreateCursor(
        DWMCursorBroker *this,
        struct DeviceInfo *a2,
        int a3,
        struct ICursor **a4)
{
  int v8; // esi
  int ValueForKey; // ebx
  __m128i v10; // xmm6
  int v11; // edx
  unsigned int v12; // ecx
  _DWORD *v13; // rax
  struct ICursor *v14; // rcx
  struct ICursor *v15; // rdi
  void *v16; // rax
  bool v17; // dl
  void *v18; // rbx
  DWMCursor *v19; // rsi
  struct ICursor *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v24; // [rsp+38h] [rbp-59h] BYREF
  struct ICursor *v25; // [rsp+40h] [rbp-51h] BYREF
  _QWORD v26[2]; // [rsp+48h] [rbp-49h] BYREF
  __m128i v27; // [rsp+58h] [rbp-39h] BYREF
  __int64 v28; // [rsp+68h] [rbp-29h]
  struct ICursor **v29; // [rsp+70h] [rbp-21h]
  __m128i v30; // [rsp+78h] [rbp-19h] BYREF

  v28 = -2LL;
  *a4 = 0LL;
  v25 = 0LL;
  v8 = *((_DWORD *)a2 + 1);
  if ( (v8 & 8) != 0 )
    return (unsigned int)-2147024809;
  if ( (v8 & 2) != 0 )
  {
    v27.m128i_i64[1] = 0LL;
    if ( (v8 & 0x40) != 0 )
      v27.m128i_i32[0] = 2;
    else
      v27.m128i_i32[0] = 1;
  }
  else
  {
    v27.m128i_i32[0] = *((_DWORD *)this + 370);
    *((_DWORD *)this + 370) = v27.m128i_i32[0] + 1;
    v27.m128i_i64[1] = 0LL;
  }
  v10 = v27;
  v11 = _mm_cvtsi128_si32(v27);
  if ( v11 != *((_DWORD *)this + 310) )
  {
    v12 = 0;
    v13 = (_DWORD *)((char *)this + 40);
    while ( *v13 != v11 )
    {
      ++v12;
      v13 += 6;
      if ( v12 >= 0x32 )
        goto LABEL_12;
    }
    ValueForKey = FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey((char *)this + 40, &v27, &v25);
    if ( ValueForKey < 0 )
      goto LABEL_21;
    v15 = v25;
    (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v25 + 8LL))(v25);
LABEL_44:
    if ( !*(_DWORD *)a2
      || (LODWORD(v26[0]) = *(_DWORD *)a2,
          HIDWORD(v26[0]) = a3,
          ValueForKey = DynamicSizeMap<DWMPointerMapping,CursorId,1>::SetValueForKey((char *)this + 1256, v26, &v27),
          ValueForKey >= 0) )
    {
      *a4 = v15;
      return (unsigned int)ValueForKey;
    }
    goto LABEL_21;
  }
LABEL_12:
  v14 = (struct ICursor *)*((_QWORD *)this + 4);
  v25 = v14;
  if ( v14 )
    (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v14 + 8LL))(v14);
  v29 = &v25;
  v15 = 0LL;
  v16 = malloc(0x150uLL);
  v18 = v16;
  if ( v16 )
    memset_0(v16, 0, 0x150uLL);
  if ( v18 )
  {
    v30 = v10;
    v26[0] = v25;
    if ( v25 )
      (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v25 + 8LL))(v25);
    v19 = (DWMCursor *)DWMCursor::DWMCursor((_DWORD)v18, (_DWORD)this, (unsigned int)v26, v8, (__int64)&v30);
  }
  else
  {
    v19 = 0LL;
  }
  if ( v19 )
  {
    ValueForKey = DWMCursor::Initialize(v19, v17);
    if ( ValueForKey >= 0 )
      v15 = v19;
  }
  else
  {
    ValueForKey = -2147024882;
  }
  v20 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( ValueForKey < 0 )
  {
LABEL_21:
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    return (unsigned int)ValueForKey;
  }
  v24 = 0LL;
  if ( (*(int (__fastcall **)(DWMCursorBroker *, __int64 *))(*(_QWORD *)this + 40LL))(this, &v24) < 0
    || (ValueForKey = (*(__int64 (__fastcall **)(__int64, struct ICursor **, char *))(*(_QWORD *)v24 + 32LL))(
                        v24,
                        &v25,
                        (char *)&v25 + 4),
        ValueForKey >= 0)
    && (ValueForKey = (*(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v24 + 88LL))(v24, &v30),
        ValueForKey >= 0)
    && (ValueForKey = (*(__int64 (__fastcall **)(struct ICursor *, _QWORD, _QWORD))(*(_QWORD *)v15 + 24LL))(
                        v15,
                        (unsigned int)v25,
                        HIDWORD(v25)),
        ValueForKey >= 0)
    && (ValueForKey = (*(__int64 (__fastcall **)(struct ICursor *, __m128i *))(*(_QWORD *)v15 + 80LL))(v15, &v30),
        ValueForKey >= 0) )
  {
    v22 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    goto LABEL_44;
  }
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  v21 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return (unsigned int)ValueForKey;
}
