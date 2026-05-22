/*
 * XREFs of ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z @ 0x180025900
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18002614C (-GetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCur.c)
 *     ?SetValueForKey@?$DynamicSizeMap@UMobilePointerMapping@@UCursorId@@$00@@QEAAJAEBUMobilePointerMapping@@AEBUCursorId@@@Z @ 0x1800261D4 (-SetValueForKey@-$DynamicSizeMap@UMobilePointerMapping@@UCursorId@@$00@@QEAAJAEBUMobilePointerMa.c)
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x1800269BC (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@V-$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@UCurs.c)
 *     ?Create@DWMHardwareCursor@@SAJPEAVDWMCursorBroker@@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x180027650 (-Create@DWMHardwareCursor@@SAJPEAVDWMCursorBroker@@V-$ComPtr@UIDCompositionDevice@@@WRL@Microsof.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursorBroker::CreateCursor(
        DWMCursorBroker *this,
        unsigned __int64 a2,
        struct IInputDisplay *a3,
        int a4,
        struct ICursor **a5)
{
  _DWORD *v6; // r15
  struct ICursor **v8; // r14
  int v9; // edi
  int v10; // ebx
  __m128i v11; // xmm6
  int v12; // ecx
  _DWORD *v13; // rax
  int ValueForKey; // eax
  __int64 v15; // rcx
  int v16; // r9d
  struct ICursor **v17; // rdi
  __int64 v18; // rcx
  struct ICursor **v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  struct ICursor **v23; // rcx
  _QWORD v25[2]; // [rsp+30h] [rbp-40h] BYREF
  __m128i v26; // [rsp+40h] [rbp-30h] BYREF
  __m128i v27; // [rsp+50h] [rbp-20h] BYREF
  struct ICursor **v28; // [rsp+A8h] [rbp+38h] BYREF

  v25[1] = -2LL;
  v6 = (_DWORD *)a2;
  v8 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  v9 = *(_DWORD *)(a2 + 4);
  if ( (v9 & 8) == 0 )
  {
    if ( (v9 & 2) != 0 )
    {
      v26.m128i_i64[1] = 0LL;
      if ( (v9 & 0x40) != 0 )
        v26.m128i_i32[0] = 2;
      else
        v26.m128i_i32[0] = 1;
    }
    else
    {
      v26.m128i_i32[0] = *((_DWORD *)this + 372);
      *((_DWORD *)this + 372) = v26.m128i_i32[0] + 1;
      v26.m128i_i64[1] = 0LL;
    }
    v11 = v26;
    v12 = _mm_cvtsi128_si32(v26);
    if ( v12 == *((_DWORD *)this + 312) )
    {
LABEL_22:
      if ( v12 == 1 && gbIsRunningWithCShell )
      {
        v28 = 0LL;
        v27 = v26;
        v18 = *((_QWORD *)this + 5);
        v25[0] = v18;
        if ( v18 )
          (*(void (__fastcall **)(__int64, unsigned __int64, struct IInputDisplay *))(*(_QWORD *)v18 + 8LL))(
            v18,
            a2,
            a3);
        v10 = DWMHardwareCursor::Create((_DWORD)this, (unsigned int)v25, (unsigned int)&v27, v9, (__int64)&v28);
        if ( v10 < 0 )
        {
          v27 = v11;
          v20 = *((_QWORD *)this + 5);
          v25[0] = v20;
          if ( v20 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
          v21 = DWMCursor::Create((_DWORD)this, (unsigned int)v25, (unsigned int)&v27, v9, (__int64)&a5);
          v10 = v21;
          if ( v21 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq(v22, &MinInput_Warning_CheckResult, 0, 443, v21);
            if ( IsDebuggerPresent() )
              __debugbreak();
            __fastfail(7u);
          }
          v17 = a5;
          v19 = v28;
        }
        else
        {
          v17 = v28;
          v19 = 0LL;
          if ( v28 )
            v17 = v28 + 1;
        }
        if ( v19 )
          (*((void (__fastcall **)(struct ICursor **))*v19 + 2))(v19);
      }
      else
      {
        v27 = v26;
        v23 = (struct ICursor **)*((_QWORD *)this + 5);
        v28 = v23;
        if ( v23 )
          (*((void (__fastcall **)(struct ICursor **, unsigned __int64, struct IInputDisplay *))*v23 + 1))(v23, a2, a3);
        ValueForKey = DWMCursor::Create((_DWORD)this, (unsigned int)&v28, (unsigned int)&v27, v9, (__int64)&a5);
        v10 = ValueForKey;
        if ( ValueForKey < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v16 = 448;
LABEL_17:
            McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 0, v16, ValueForKey);
          }
LABEL_18:
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v17 = a5;
      }
    }
    else
    {
      LODWORD(a2) = 0;
      v13 = (_DWORD *)((char *)this + 48);
      while ( *v13 != v12 )
      {
        a2 = (unsigned int)(a2 + 1);
        v13 += 6;
        if ( (unsigned int)a2 >= 0x32 )
          goto LABEL_22;
      }
      ValueForKey = FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey((char *)this + 48, &v26, &a5);
      v10 = ValueForKey;
      if ( ValueForKey < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_18;
        v16 = 426;
        goto LABEL_17;
      }
      v17 = a5;
      (*((void (__fastcall **)(struct ICursor **))*a5 + 1))(a5);
    }
    if ( !*v6
      || (LODWORD(a5) = *v6,
          HIDWORD(a5) = a4,
          ValueForKey = DynamicSizeMap<MobilePointerMapping,CursorId,1>::SetValueForKey((char *)this + 1264, &a5, &v26),
          v10 = ValueForKey,
          ValueForKey >= 0) )
    {
      *v8 = (struct ICursor *)v17;
      return (unsigned int)v10;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v16 = 454;
      goto LABEL_17;
    }
    goto LABEL_18;
  }
  v10 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 405, 87);
  return (unsigned int)v10;
}
