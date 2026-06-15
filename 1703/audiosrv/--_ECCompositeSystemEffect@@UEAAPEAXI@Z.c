/*
 * XREFs of ??_ECCompositeSystemEffect@@UEAAPEAXI@Z @ 0x180012A70
 * Callers:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UICompositeSystemEffect@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@U?$InterfaceList@UIAudioProcessingObjectInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013980 (-Release@-$RuntimeClass@U-$InterfaceList@UICompositeSystemEffect@@U-$InterfaceList@UIAudioProces.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

CCompositeSystemEffect *__fastcall CCompositeSystemEffect::`vector deleting destructor'(
        CCompositeSystemEffect *this,
        char a2)
{
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  void *v13; // rcx

  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( *((_QWORD *)this + 11) )
  {
    v5 = 0;
    if ( *((int *)this + 24) > 0 )
    {
      v6 = 0LL;
      do
      {
        v7 = *((_QWORD *)this + 11);
        v8 = *(_QWORD *)(v6 + v7);
        if ( v8 )
        {
          *(_QWORD *)(v6 + v7) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        ++v5;
        v6 += 8LL;
      }
      while ( v5 < *((_DWORD *)this + 24) );
    }
    free(*((void **)this + 11));
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_QWORD *)this + 12) = 0LL;
  if ( *((_QWORD *)this + 9) )
  {
    v9 = 0;
    if ( *((int *)this + 20) > 0 )
    {
      v10 = 0LL;
      do
      {
        v11 = *((_QWORD *)this + 9);
        v12 = *(_QWORD *)(v10 + v11);
        if ( v12 )
        {
          *(_QWORD *)(v10 + v11) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        ++v9;
        v10 += 8LL;
      }
      while ( v9 < *((_DWORD *)this + 20) );
    }
    free(*((void **)this + 9));
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_QWORD *)this + 10) = 0LL;
  v13 = (void *)*((_QWORD *)this + 7);
  if ( v13 )
  {
    free(v13);
    *((_QWORD *)this + 7) = 0LL;
  }
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 9) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
