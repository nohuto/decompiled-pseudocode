/*
 * XREFs of ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x18016708C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180088DEC (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x180136E50 (-AddMultipleAndSet@-$DynArray@E$0A@@@QEAAJPEFBEI@Z.c)
 */

__int64 __fastcall CGenericInk::ProcessSegmentUpdate(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_GENERICINK_SEGMENTUPDATE *a3,
        const void *a4,
        unsigned int a5)
{
  __int64 v6; // r12
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  int v12; // r14d
  signed int appended; // eax
  unsigned int v14; // r15d
  unsigned int v15; // ecx
  unsigned int v16; // eax
  int v17; // esi
  int v18; // r13d
  unsigned int v19; // r14d
  unsigned int v20; // r13d
  unsigned int i; // ebp
  __int64 v22; // r10
  _QWORD *v23; // rcx
  unsigned int v25; // [rsp+20h] [rbp-78h]
  unsigned int v26; // [rsp+20h] [rbp-78h]
  _QWORD v27[2]; // [rsp+40h] [rbp-58h] BYREF

  v6 = 0LL;
  if ( !*((_DWORD *)a3 + 3) )
    goto LABEL_9;
  v8 = a5 / *((_DWORD *)a3 + 3);
  if ( v8 )
  {
    v9 = *((_DWORD *)this + 50);
    if ( v9 )
    {
      if ( v8 != v9 )
      {
        v25 = 338;
        goto LABEL_7;
      }
    }
    else
    {
      *((_DWORD *)this + 50) = v8;
    }
LABEL_9:
    v11 = *((_DWORD *)this + 50);
    if ( v11 )
      v12 = *((_DWORD *)this + 48) / v11;
    else
      v12 = 0;
    *((_DWORD *)this + 48) = *((_DWORD *)a3 + 2) * v11;
    appended = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)this + 168, a4, a5);
    v10 = appended;
    if ( appended < 0 )
    {
      v26 = 52;
    }
    else
    {
      v14 = *((_DWORD *)this + 28);
      v15 = *((_DWORD *)a3 + 4);
      *((_DWORD *)this + 51) = v15;
      if ( !v14 )
      {
LABEL_24:
        (*(void (__fastcall **)(CGenericInk *, __int64))(*(_QWORD *)this + 64LL))(this, 3LL);
        (*(void (__fastcall **)(CGenericInk *, __int64, CGenericInk *))(*(_QWORD *)this + 64LL))(this, 1LL, this);
        return v10;
      }
      v16 = *((_DWORD *)a3 + 3);
      v17 = *((_DWORD *)a3 + 2);
      v18 = v17 + v16;
      if ( v15 > v16 )
        v17 += v16 - v15;
      v19 = v12 - v17;
      v20 = v18 - v17;
      v27[0] = 0LL;
      v27[1] = 0LL;
      for ( i = 0; i < v14; ++i )
      {
        v23 = v27;
        if ( i )
          v23 = 0LL;
        v22 = *(_QWORD *)(*(_QWORD *)(v6 + *((_QWORD *)this + 11)) + 104LL);
        appended = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD *))(*(_QWORD *)v22 + 48LL))(
                     v22,
                     v19,
                     *((_QWORD *)this + 21) + (unsigned int)(v17 * *((_DWORD *)this + 50)),
                     v20,
                     *((_DWORD *)this + 51),
                     *((_DWORD *)this + 50),
                     v23);
        v10 = appended;
        if ( appended < 0 )
        {
          v26 = 86;
          goto LABEL_26;
        }
        v6 += 8LL;
      }
      appended = CRegion::AppendRects<tagRECT>((CGenericInk *)((char *)this + 224), (__int64)v27, 1u);
      v10 = appended;
      if ( appended >= 0 )
        goto LABEL_24;
      v26 = 89;
    }
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, appended, v26);
    return v10;
  }
  v25 = 330;
LABEL_7:
  v10 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, v25);
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x2Cu);
  return v10;
}
