/*
 * XREFs of ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x18015DB20
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800204B0 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x180094C3C (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddIntervalOneDxBltEventId(CLegacySurfaceManager *this, __int64 a2)
{
  char *v2; // r10
  int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // r11
  _QWORD *v8; // rcx
  unsigned int v9; // ecx
  int v10; // eax
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (char *)this + 176;
  v3 = 0;
  v4 = *((unsigned int *)this + 50);
  v5 = 0;
  v6 = *((_QWORD *)this + 22);
  if ( (_DWORD)v4 )
  {
    v8 = (_QWORD *)*((_QWORD *)this + 22);
    do
    {
      if ( a2 == *v8 )
        break;
      ++v5;
      ++v8;
    }
    while ( v5 < (unsigned int)v4 );
  }
  if ( v5 == *((_DWORD *)this + 50) )
  {
    v9 = v4 + 1;
    v3 = (int)v4 + 1 < (unsigned int)v4 ? 0x80070216 : 0;
    if ( (int)v4 + 1 < (unsigned int)v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v9 > *((_DWORD *)v2 + 5) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8u, 1, &v12);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      *(_QWORD *)(v6 + 8 * v4) = v12;
      *((_DWORD *)v2 + 6) = v9;
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x1B7u);
  }
  return (unsigned int)v3;
}
