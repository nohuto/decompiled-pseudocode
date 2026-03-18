/*
 * XREFs of ?GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV?$DynArray@PEAVCDisplay@@$0A@@@@Z @ 0x180185ED0
 * Callers:
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180146D40 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CDisplaySet::GetSecondaryCloneDisplaysNoRef(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v7; // rdi
  unsigned int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // eax
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  if ( *(_BYTE *)(a2 + 295) )
  {
    LODWORD(v7) = *(_DWORD *)(a1 + 72);
    if ( (_DWORD)v7 )
    {
      v8 = v14;
      while ( 1 )
      {
        v7 = (unsigned int)(v7 - 1);
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v7);
        v14 = v9;
        if ( *(_QWORD *)(v9 + 128) == a2 && v9 != a2 )
        {
          v10 = *(unsigned int *)(a3 + 24);
          v11 = v10 + 1;
          if ( (int)v10 + 1 >= (unsigned int)v10 )
            v8 = v10 + 1;
          v3 = v11 < (unsigned int)v10 ? 0x80070216 : 0;
          if ( v11 < (unsigned int)v10 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
          }
          else if ( v8 > *(_DWORD *)(a3 + 20) )
          {
            v12 = DynArrayImpl<0>::AddMultipleAndSet(a3, 8u, 1, &v14);
            v3 = v12;
            if ( v12 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)a3 + 8 * v10) = v14;
            *(_DWORD *)(a3 + 24) = v8;
          }
          if ( v3 < 0 )
            break;
        }
        if ( !(_DWORD)v7 )
          return (unsigned int)v3;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x3F4u);
    }
  }
  return (unsigned int)v3;
}
