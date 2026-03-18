/*
 * XREFs of ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x18018F7B8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18007DA70 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x1801592F4 (-AddMultipleAndSet@-$DynArray@E$0A@@@QEAAJPEFBEI@Z.c)
 */

__int64 __fastcall CGenericInk::ProcessSegmentUpdate(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_GENERICINK_SEGMENTUPDATE *a3,
        const void *a4,
        unsigned int a5)
{
  __int64 v5; // r12
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // edi
  unsigned int v12; // r8d
  int v13; // r14d
  int appended; // eax
  unsigned int v15; // edx
  unsigned int v16; // r15d
  unsigned int v17; // eax
  int v18; // esi
  int v19; // r13d
  unsigned int v20; // r14d
  unsigned int v21; // r13d
  unsigned int i; // ebp
  __int64 v23; // r10
  _QWORD *v24; // rcx
  unsigned int v26; // [rsp+20h] [rbp-78h]
  _QWORD v27[2]; // [rsp+40h] [rbp-58h] BYREF

  v5 = 0LL;
  if ( !*((_DWORD *)a3 + 3) )
    goto LABEL_9;
  v8 = a5 / *((_DWORD *)a3 + 3);
  if ( v8 )
  {
    v10 = *((_DWORD *)this + 50);
    if ( v10 )
    {
      if ( v8 != v10 )
      {
        v9 = 370;
        goto LABEL_7;
      }
    }
    else
    {
      *((_DWORD *)this + 50) = v8;
    }
LABEL_9:
    v12 = *((_DWORD *)this + 50);
    if ( v12 )
      v13 = *((_DWORD *)this + 48) / v12;
    else
      v13 = 0;
    *((_DWORD *)this + 48) = v12 * *((_DWORD *)a3 + 2);
    appended = DynArray<unsigned char,0>::AddMultipleAndSet((__int64)this + 168, a4, a5);
    v11 = appended;
    if ( appended < 0 )
    {
      v26 = 96;
    }
    else
    {
      v15 = *((_DWORD *)a3 + 4);
      v16 = *((_DWORD *)this + 28);
      *((_DWORD *)this + 51) = v15;
      *((_DWORD *)this + 52) = *((_DWORD *)a3 + 5);
      if ( !v16 )
      {
LABEL_24:
        (*(void (__fastcall **)(CGenericInk *, __int64))(*(_QWORD *)this + 64LL))(this, 3LL);
        (*(void (__fastcall **)(CGenericInk *, __int64, CGenericInk *))(*(_QWORD *)this + 64LL))(this, 1LL, this);
        return v11;
      }
      v17 = *((_DWORD *)a3 + 3);
      v18 = *((_DWORD *)a3 + 2);
      v19 = v18 + v17;
      if ( v15 > v17 )
        v18 += v17 - v15;
      v20 = v13 - v18;
      v21 = v19 - v18;
      v27[0] = 0LL;
      v27[1] = 0LL;
      for ( i = 0; i < v16; ++i )
      {
        v24 = v27;
        if ( i )
          v24 = 0LL;
        v23 = *(_QWORD *)(*(_QWORD *)(v5 + *((_QWORD *)this + 11)) + 104LL);
        appended = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD *))(*(_QWORD *)v23 + 48LL))(
                     v23,
                     v20,
                     *((_QWORD *)this + 21) + (unsigned int)(v18 * *((_DWORD *)this + 50)),
                     v21,
                     *((_DWORD *)this + 51),
                     *((_DWORD *)this + 50),
                     v24);
        v11 = appended;
        if ( appended < 0 )
        {
          v26 = 131;
          goto LABEL_26;
        }
        v5 += 8LL;
      }
      appended = CRegion::AppendRects<tagRECT>((CGenericInk *)((char *)this + 224), (__int64)v27, 1u);
      v11 = appended;
      if ( appended >= 0 )
        goto LABEL_24;
      v26 = 134;
    }
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, v26);
    return v11;
  }
  v9 = 362;
LABEL_7:
  v11 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, v9);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x58u);
  return v11;
}
