/*
 * XREFs of ?GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV?$DynArray@PEAVCDisplay@@$0A@@@@Z @ 0x18018EC54
 * Callers:
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180133320 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplaySet::GetSecondaryCloneDisplaysNoRef(__int64 a1, __int64 a2, __int64 a3)
{
  DWORD v3; // ebx
  __int64 v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  signed int v13; // eax
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  if ( *(_BYTE *)(a2 + 305) )
  {
    LODWORD(v7) = *(_DWORD *)(a1 + 72);
    if ( (_DWORD)v7 )
    {
      v8 = v15;
      while ( 1 )
      {
        v7 = (unsigned int)(v7 - 1);
        v9 = v8;
        v10 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v7);
        v15 = v10;
        if ( *(_QWORD *)(v10 + 128) == a2 && v10 != a2 )
        {
          v11 = *(unsigned int *)(a3 + 24);
          v12 = v11 + 1;
          v8 = v11 + 1;
          if ( (int)v11 + 1 < (unsigned int)v11 )
            v8 = v9;
          v3 = v12 < (unsigned int)v11 ? 0x80070216 : 0;
          if ( v12 < (unsigned int)v11 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xB5u);
          }
          else if ( v8 > *(_DWORD *)(a3 + 20) )
          {
            v13 = DynArrayImpl<0>::AddMultipleAndSet(a3, 8u, 1, &v15);
            v3 = v13;
            if ( v13 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0xC0u);
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)a3 + 8 * v11) = v15;
            *(_DWORD *)(a3 + 24) = v8;
          }
          if ( (v3 & 0x80000000) != 0 )
            break;
        }
        if ( !(_DWORD)v7 )
          return v3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x3F6u);
    }
  }
  return v3;
}
