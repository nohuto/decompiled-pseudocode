/*
 * XREFs of ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x18001BC40
 * Callers:
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180019FB0 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 * Callees:
 *     ??$emplace@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@1@AEBVWeakRef@WRL@Microsoft@@@Z @ 0x180014FD0 (--$emplace@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WR.c)
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18001B680 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C240 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     _lambda_b3a8f3052f5fb17079f668791b666c16_::operator() @ 0x180043B40 (_lambda_b3a8f3052f5fb17079f668791b666c16_--operator().c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x180043BB0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x1800999C0 (_lambda_ce21942885de90a1a6198292e021f395_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectsStore::AddStreamGroup(
        CDeviceGraphObjectsStore *this,
        struct Microsoft::WRL::WeakRef *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // r12
  Microsoft::WRL::Details::WeakReferenceImpl *v4; // rcx
  char *v5; // r13
  Microsoft::WRL::Details::WeakReferenceImpl **v6; // rbx
  Microsoft::WRL::Details::WeakReferenceImpl **v7; // rdi
  Microsoft::WRL::Details::WeakReferenceImpl *v8; // rcx
  __int64 (__fastcall *v9)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **); // rax
  int v10; // eax
  bool v11; // si
  Microsoft::WRL::Details::WeakReferenceImpl **i; // rsi
  Microsoft::WRL::Details::WeakReferenceImpl **v13; // rsi
  Microsoft::WRL::Details::WeakReferenceImpl **j; // rdi
  void (__fastcall *v15)(Microsoft::WRL::Details::WeakReferenceImpl *, __int64 (__fastcall *)(_QWORD, _QWORD)); // rax
  unsigned int v16; // esi
  struct IInspectable ***v17; // rbx
  struct IInspectable **v18; // rdi
  struct IInspectable **v19; // r14
  struct IInspectable **v20; // r14
  struct _RTL_CRITICAL_SECTION *v21; // r12
  unsigned int v22; // ebx
  struct IInspectable **k; // r15
  Microsoft::WRL::Details::WeakReferenceImpl **v25; // r15
  void (__fastcall *v26)(Microsoft::WRL::Details::WeakReferenceImpl *, __int64 (__fastcall *)(_QWORD, _QWORD)); // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v27; // rax
  struct IInspectable *v28; // rax
  char v29; // [rsp+28h] [rbp-40h] BYREF
  struct IInspectable *v30; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 *v31; // [rsp+78h] [rbp+10h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+88h] [rbp+20h]

  v31 = (unsigned __int64 *)a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v33 = v3;
  EnterCriticalSection(v3);
  v5 = (char *)this + 64;
  v6 = (Microsoft::WRL::Details::WeakReferenceImpl **)*((_QWORD *)this + 8);
  v7 = (Microsoft::WRL::Details::WeakReferenceImpl **)*((_QWORD *)this + 9);
  if ( v6 != v7 )
  {
    do
    {
      v30 = 0LL;
      v8 = *v6;
      v11 = 1;
      if ( *v6 )
      {
        v9 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **))(*(_QWORD *)v8 + 24LL);
        v10 = v9 == Microsoft::WRL::Details::WeakReferenceImpl::Resolve
            ? Microsoft::WRL::Details::WeakReferenceImpl::Resolve(v8, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v30)
            : v9(v8, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v30);
        if ( v10 >= 0 && v30 )
          v11 = 0;
      }
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v30);
      if ( v11 )
        break;
      ++v6;
    }
    while ( v6 != v7 );
    v5 = (char *)this + 64;
    if ( v6 != v7 )
    {
      for ( i = v6 + 1; i != v7; ++i )
      {
        if ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v4, i) )
        {
          v27 = 0LL;
          if ( &v29 != (char *)i )
          {
            v27 = *i;
            *i = 0LL;
          }
          v4 = *v6;
          *v6 = v27;
          if ( v4 )
            (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v4 + 16LL))(v4);
          ++v6;
        }
      }
    }
  }
  if ( v6 != *((Microsoft::WRL::Details::WeakReferenceImpl ***)this + 9) )
  {
    v13 = (Microsoft::WRL::Details::WeakReferenceImpl **)*((_QWORD *)v5 + 1);
    for ( j = v6; j != v13; ++j )
    {
      v4 = *j;
      if ( *j )
      {
        *j = 0LL;
        v15 = *(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *, __int64 (__fastcall *)(_QWORD, _QWORD)))(*(_QWORD *)v4 + 16LL);
        if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
            v4,
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release);
        else
          v15(
            v4,
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release);
      }
    }
    *((_QWORD *)v5 + 1) = v6;
  }
  v16 = 0;
  v17 = (struct IInspectable ***)((char *)this + 88);
  do
  {
    v18 = *v17;
    v19 = v17[1];
    if ( *v17 != v19 )
    {
      do
      {
        if ( (unsigned __int8)lambda_b3a8f3052f5fb17079f668791b666c16_::operator()(v4, v18) )
          break;
        ++v18;
      }
      while ( v18 != v19 );
      if ( v18 != v19 )
      {
        for ( k = v18 + 1; k != v19; ++k )
        {
          if ( !(unsigned __int8)lambda_b3a8f3052f5fb17079f668791b666c16_::operator()(v4, k) )
          {
            v28 = 0LL;
            if ( &v30 != k )
            {
              v28 = *k;
              *k = 0LL;
            }
            v4 = (Microsoft::WRL::Details::WeakReferenceImpl *)*v18;
            *v18 = v28;
            if ( v4 )
              (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v4 + 16LL))(v4);
            ++v18;
          }
        }
      }
    }
    v20 = v17[1];
    if ( v18 != v20 )
    {
      v25 = (Microsoft::WRL::Details::WeakReferenceImpl **)v18;
      do
      {
        v4 = *v25;
        if ( *v25 )
        {
          *v25 = 0LL;
          v26 = *(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *, __int64 (__fastcall *)(_QWORD, _QWORD)))(*(_QWORD *)v4 + 16LL);
          if ( (char *)v26 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
              v4,
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release);
          else
            v26(
              v4,
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release);
        }
        ++v25;
      }
      while ( v25 != (Microsoft::WRL::Details::WeakReferenceImpl **)v20 );
      v17[1] = v18;
    }
    ++v16;
    v17 += 3;
  }
  while ( v16 < 4 );
  v21 = lpCriticalSection;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  try
  {
    std::vector<Microsoft::WRL::WeakRef>::emplace<Microsoft::WRL::WeakRef const &>(
      (__int64 **)v5,
      &v30,
      *(unsigned __int64 **)v5,
      v31);
  }
  catch ( std::bad_alloc )
  {
    LODWORD(v30) = -2147024882;
    v22 = -2147024882;
    v21 = lpCriticalSection;
    goto LABEL_25;
  }
  v22 = 0;
LABEL_25:
  if ( v21 )
    LeaveCriticalSection(v21);
  return v22;
}
