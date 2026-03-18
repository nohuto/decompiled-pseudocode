/*
 * XREFs of ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x1801A5D10
 * Callers:
 *     ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x18012FF84 (-ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTERO.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1801A60EC (-FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801A8C3C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddInteropTexture(RTL_SRWLOCK *this, struct CHolographicInteropTexture *a2)
{
  RTL_SRWLOCK *v2; // rbx
  bool v4; // si
  struct CHolographicInteropTexture *InteropTextureByBindId; // rdi
  __int64 Ptr_low; // rcx
  unsigned int v7; // edx
  unsigned int v8; // eax
  int v9; // eax
  CHolographicInteropTaskQueue *Ptr; // rcx
  struct IUnknown *v11; // r8
  CBitmapOfDeviceBitmaps *v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  v2 = this + 9;
  v4 = 0;
  AcquireSRWLockShared(this + 9);
  InteropTextureByBindId = CHolographicManager::FindInteropTextureByBindId(
                             (CHolographicManager *)this,
                             *((_DWORD *)v13 + 26));
  ReleaseSRWLockShared(v2);
  if ( !InteropTextureByBindId )
  {
    AcquireSRWLockExclusive(v2);
    CBitmapOfDeviceBitmaps::AddRef(v13);
    Ptr_low = LODWORD(this[13].Ptr);
    v7 = (unsigned int)v13;
    v8 = Ptr_low + 1;
    if ( (int)Ptr_low + 1 >= (unsigned int)Ptr_low )
      v7 = Ptr_low + 1;
    if ( v8 < (unsigned int)Ptr_low )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8 < (unsigned int)Ptr_low ? 0x80070216 : 0, 0xB5u);
    }
    else if ( v7 > HIDWORD(this[12].Ptr) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&this[10], 8u, 1, &v13);
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      *((_QWORD *)this[10].Ptr + Ptr_low) = v13;
      LODWORD(this[13].Ptr) = v7;
    }
    Ptr = (CHolographicInteropTaskQueue *)this[5].Ptr;
    if ( Ptr )
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
