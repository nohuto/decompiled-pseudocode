/*
 * XREFs of ?Initialize@CDesktopThumbnailBase@@MEAAJPEAUIDwmChannel@@@Z @ 0x18009BAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800184C0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopThumbnailBase::Initialize(CDesktopThumbnailBase *this, struct IDwmChannel *a2)
{
  int v3; // eax
  int v4; // ebx
  CDesktopManager *v5; // r10
  unsigned int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // eax
  int v9; // eax
  CDesktopThumbnailBase *v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = CVisual::Initialize(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = CDesktopManager::s_pDesktopManagerInstance;
    v11 = this;
    v6 = (unsigned int)this;
    v7 = *((unsigned int *)CDesktopManager::s_pDesktopManagerInstance + 186);
    v8 = v7 + 1;
    if ( (int)v7 + 1 >= (unsigned int)v7 )
      v6 = v7 + 1;
    v4 = v8 < (unsigned int)v7 ? 0x80070216 : 0;
    if ( v8 >= (unsigned int)v7 )
    {
      if ( v6 > *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 185) )
      {
        v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)CDesktopManager::s_pDesktopManagerInstance + 720, 8u, 1, &v11);
        v4 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 90) + 8 * v7) = v11;
        *((_DWORD *)v5 + 186) = v6;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
    }
    if ( v4 >= 0 )
      *((_BYTE *)this + 84) |= 8u;
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x28u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x27u);
  }
  return (unsigned int)v4;
}
