/*
 * XREFs of ?CreateCursor@MobileCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z @ 0x18002F6C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18002614C (-GetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCur.c)
 *     ?SetValueForKey@?$DynamicSizeMap@UMobilePointerMapping@@UCursorId@@$00@@QEAAJAEBUMobilePointerMapping@@AEBUCursorId@@@Z @ 0x1800261D4 (-SetValueForKey@-$DynamicSizeMap@UMobilePointerMapping@@UCursorId@@$00@@QEAAJAEBUMobilePointerMa.c)
 *     ?SetValueForKey@?$FixedSizeMap@UCursorId@@PEAVMobileCursor@@$0DC@@@QEAAJAEBUCursorId@@AEBQEAVMobileCursor@@@Z @ 0x180030758 (-SetValueForKey@-$FixedSizeMap@UCursorId@@PEAVMobileCursor@@$0DC@@@QEAAJAEBUCursorId@@AEBQEAVMob.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileCursorBroker::CreateCursor(
        MobileCursorBroker *this,
        struct DeviceInfo *a2,
        struct IInputDisplay *a3,
        int a4,
        struct ICursor **a5)
{
  struct ICursor **v5; // r14
  __m128i v9; // xmm6
  int v10; // edx
  _DWORD *v11; // r12
  unsigned int v12; // ecx
  _DWORD *v13; // rax
  int v14; // r13d
  struct ICursor *v15; // rdi
  int v16; // r14d
  char *v17; // rax
  __int64 v18; // rcx
  char *v19; // rbx
  int ValueForKey; // eax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  int v23; // r9d
  char v24; // al
  int v25; // eax
  __int64 v26; // rcx
  int v28[4]; // [rsp+30h] [rbp-88h] BYREF
  __m128i v29; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v30; // [rsp+50h] [rbp-68h]
  __int64 v31; // [rsp+58h] [rbp-60h]
  unsigned __int64 v32; // [rsp+60h] [rbp-58h]
  __int64 v33; // [rsp+68h] [rbp-50h]
  struct ICursor *v34; // [rsp+C0h] [rbp+8h] BYREF
  int *v35; // [rsp+C8h] [rbp+10h]
  int v36; // [rsp+D8h] [rbp+20h]

  v36 = a4;
  v35 = (int *)a2;
  v5 = a5;
  v34 = 0LL;
  *a5 = 0LL;
  if ( (*((_BYTE *)a2 + 4) & 2) != 0 )
  {
    LODWORD(v30) = 1;
    v31 = 0LL;
    v9 = (__m128i)v30;
  }
  else
  {
    LODWORD(v32) = *((_DWORD *)this + 342);
    *((_DWORD *)this + 342) = v32 + 1;
    v33 = 0LL;
    v9 = (__m128i)v32;
  }
  v10 = _mm_cvtsi128_si32(v9);
  v11 = (_DWORD *)((char *)this + 96);
  v29 = v9;
  if ( v10 != *((_DWORD *)this + 324) )
  {
    v12 = 0;
    v13 = v11;
    while ( *v13 != v10 )
    {
      ++v12;
      v13 += 6;
      if ( v12 >= 0x32 )
        goto LABEL_8;
    }
    ValueForKey = FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey(v11, (unsigned int *)&v29, &v34);
    v22 = ValueForKey;
    if ( ValueForKey < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v23 = 195;
LABEL_25:
        McTemplateU0qqq(v21, &MinInput_Warning_CheckResult, 0, v23, ValueForKey);
        return v22;
      }
      return v22;
    }
    v15 = v34;
    (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v34 + 8LL))(v34);
LABEL_39:
    v28[0] = *v35;
    v28[1] = v36;
    v25 = DynamicSizeMap<MobilePointerMapping,CursorId,1>::SetValueForKey((__int64)this + 1312, v28, &v29);
    v22 = v25;
    if ( v25 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v26, &MinInput_Warning_CheckResult, 0, 210, v25);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    *v5 = v15;
    return v22;
  }
LABEL_8:
  v14 = *((_DWORD *)a2 + 1);
  v15 = 0LL;
  v16 = 0;
  v34 = 0LL;
  v17 = (char *)malloc(0x50uLL);
  v19 = v17;
  if ( v17 )
    memset(v17, 0, 0x50uLL);
  if ( v19 )
  {
    *((_QWORD *)v19 + 1) = &RefCountedObject::`vftable';
    *((_DWORD *)v19 + 4) = 1;
    *(_QWORD *)v19 = &MobileCursor::`vftable'{for `ICursor'};
    *((_QWORD *)v19 + 1) = &MobileCursor::`vftable'{for `RefCountedObject'};
    *((_QWORD *)v19 + 3) = 0LL;
    *((_QWORD *)v19 + 4) = 0LL;
    if ( *((MobileCursorBroker **)v19 + 3) != this )
    {
      if ( this )
        (*(void (__fastcall **)(MobileCursorBroker *))(*(_QWORD *)this + 8LL))(this);
      v18 = *((_QWORD *)v19 + 3);
      *((_QWORD *)v19 + 3) = this;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    if ( *((struct IInputDisplay **)v19 + 4) != a3 )
    {
      if ( a3 )
        (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)a3 + 8LL))(a3);
      v18 = *((_QWORD *)v19 + 4);
      *((_QWORD *)v19 + 4) = a3;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    *((_DWORD *)v19 + 16) = 0;
    *(__m128i *)(v19 + 40) = v9;
    *((_DWORD *)v19 + 15) = v14;
    *((_WORD *)v19 + 28) = 0;
  }
  v24 = Microsoft_OneCore_MinInputEnableBits;
  if ( v19 )
  {
    v15 = (struct ICursor *)v19;
    v34 = (struct ICursor *)v19;
  }
  else
  {
    v22 = -2147024882;
    v16 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v18, &MinInput_Warning_CheckResult, 0, 51, 14);
      v24 = Microsoft_OneCore_MinInputEnableBits;
      goto LABEL_33;
    }
  }
  v22 = v16;
  if ( v16 < 0 )
  {
LABEL_33:
    if ( (v24 & 2) != 0 )
      McTemplateU0qqq(v18, &MinInput_Warning_CheckResult, 0, 205, v16);
    return v22;
  }
  ValueForKey = FixedSizeMap<CursorId,MobileCursor *,50>::SetValueForKey(v11, &v29, &v34);
  v22 = ValueForKey;
  if ( ValueForKey >= 0 )
  {
    v5 = a5;
    goto LABEL_39;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v23 = 207;
    goto LABEL_25;
  }
  return v22;
}
