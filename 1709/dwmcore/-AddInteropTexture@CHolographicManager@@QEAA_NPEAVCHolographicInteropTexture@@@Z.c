/*
 * XREFs of ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x1801BFDF0
 * Callers:
 *     ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x1801BEB4C (-ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTERO.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1801C07E8 (-FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801C3DC8 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddInteropTexture(RTL_SRWLOCK *this, struct CHolographicInteropTexture *a2)
{
  RTL_SRWLOCK *v2; // rbx
  bool v4; // si
  struct CHolographicInteropTexture *InteropTextureByBindId; // rdi
  __int64 Ptr_low; // rcx
  unsigned int v7; // edx
  unsigned int v8; // eax
  signed int v9; // eax
  CHolographicInteropTaskQueue *Ptr; // rcx
  struct IUnknown *v11; // r8
  CMILCOMBase *v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  v2 = this + 10;
  v4 = 0;
  AcquireSRWLockShared(this + 10);
  InteropTextureByBindId = CHolographicManager::FindInteropTextureByBindId(
                             (CHolographicManager *)this,
                             *((_DWORD *)v13 + 28));
  ReleaseSRWLockShared(v2);
  if ( !InteropTextureByBindId )
  {
    AcquireSRWLockExclusive(v2);
    CMILCOMBase::InternalAddRef(v13);
    Ptr_low = LODWORD(this[18].Ptr);
    v7 = (unsigned int)v13;
    v8 = Ptr_low + 1;
    if ( (int)Ptr_low + 1 >= (unsigned int)Ptr_low )
      v7 = Ptr_low + 1;
    if ( v8 < (unsigned int)Ptr_low )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8 < (unsigned int)Ptr_low ? 0x80070216 : 0, 0xB5u);
    }
    else if ( v7 > HIDWORD(this[17].Ptr) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[15], 8u, 1, &v13);
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      *((_QWORD *)this[15].Ptr + Ptr_low) = v13;
      LODWORD(this[18].Ptr) = v7;
    }
    Ptr = (CHolographicInteropTaskQueue *)this[5].Ptr;
    if ( Ptr && LOBYTE(this[24].Ptr) )
    {
      v11 = (struct IUnknown *)((char *)v13 + 64);
      if ( !v13 )
        v11 = 0LL;
      v4 = CHolographicInteropTaskQueue::PostMessageW(Ptr, 2u, v11, 0LL, 0LL, 0LL, 0LL);
    }
    ReleaseSRWLockExclusive(v2);
  }
  return v4;
}
