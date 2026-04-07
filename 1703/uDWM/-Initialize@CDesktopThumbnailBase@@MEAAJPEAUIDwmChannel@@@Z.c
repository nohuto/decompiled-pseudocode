/*
 * XREFs of ?Initialize@CDesktopThumbnailBase@@MEAAJPEAUIDwmChannel@@@Z @ 0x18009D9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180023A60 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
    v7 = *((unsigned int *)CDesktopManager::s_pDesktopManagerInstance + 174);
    v8 = v7 + 1;
    if ( (int)v7 + 1 >= (unsigned int)v7 )
      v6 = v7 + 1;
    v4 = v8 < (unsigned int)v7 ? 0x80070216 : 0;
    if ( v8 >= (unsigned int)v7 )
    {
      if ( v6 > *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 173) )
      {
        v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)CDesktopManager::s_pDesktopManagerInstance + 672, 8u, 1, &v11);
        v4 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 84) + 8 * v7) = v11;
        *((_DWORD *)v5 + 174) = v6;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0xB5u);
    }
    if ( v4 >= 0 )
      *((_BYTE *)this + 84) |= 8u;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x28u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x27u);
  }
  return (unsigned int)v4;
}
