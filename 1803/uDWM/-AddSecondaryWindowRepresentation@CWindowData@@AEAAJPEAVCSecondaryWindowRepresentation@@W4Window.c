/*
 * XREFs of ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x1800164E8
 * Callers:
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x180015824 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015990 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x180016210 (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002E8D8 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18003AFD4 (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowData::AddSecondaryWindowRepresentation(
        __int64 a1,
        CSecondaryWindowRepresentation *a2,
        int a3,
        char a4)
{
  unsigned int v4; // ebx
  int v7; // esi
  int v8; // esi
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  int v15; // r9d
  __int64 v16; // rsi
  char *v17; // rdx
  unsigned int v18; // [rsp+20h] [rbp-18h]
  CSecondaryWindowRepresentation *v19; // [rsp+48h] [rbp+10h] BYREF

  v19 = a2;
  v4 = 0;
  if ( a4 )
  {
    v12 = *(_DWORD *)(a1 + 464);
    v13 = v12 + 1;
    v4 = v12 + 1 < v12 ? 0x80070216 : 0;
    if ( v12 + 1 >= v12 )
    {
      if ( v13 > *(_DWORD *)(a1 + 460) )
      {
        v14 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 440, 8LL, 1LL, &v19);
        v4 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 440) + 8LL * *(unsigned int *)(a1 + 464)) = v19;
        *(_DWORD *)(a1 + 464) = v13;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
    }
    if ( (v4 & 0x80000000) != 0 )
    {
      v18 = 6767;
LABEL_22:
      v15 = v4;
LABEL_24:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, v18);
      return v4;
    }
  }
  v7 = a3 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        v4 = -2147418113;
        v18 = 6814;
        goto LABEL_22;
      }
      if ( !CWindowData::IsImmersiveWindow((CWindowData *)a1) )
      {
        v10 = *(_QWORD *)(a1 + 432);
        if ( v10 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        }
        else
        {
          v11 = CWindowIconic::Create((struct CWindowData *)a1, (struct CWindowIconic **)(a1 + 432), 0);
          v4 = v11;
          if ( v11 < 0 )
          {
            v18 = 6799;
LABEL_23:
            v15 = v11;
            goto LABEL_24;
          }
        }
      }
    }
  }
  else
  {
    if ( ++*(_DWORD *)(a1 + 472) != 1 )
    {
      v16 = 0LL;
      if ( !*(_DWORD *)(a1 + 576) )
        return v4;
      while ( 1 )
      {
        v17 = *(char **)(*(_QWORD *)(a1 + 552) + 8 * v16);
        if ( v17[593] < 0 )
        {
          v11 = CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(v19, (struct CWindowData *)v17, 1);
          v4 = v11;
          if ( v11 < 0 )
            break;
        }
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= *(_DWORD *)(a1 + 576) )
          return v4;
      }
      v18 = 6787;
      goto LABEL_23;
    }
    CWindowData::TrackOwnedWindows((CWindowData *)a1, 1);
  }
  return v4;
}
