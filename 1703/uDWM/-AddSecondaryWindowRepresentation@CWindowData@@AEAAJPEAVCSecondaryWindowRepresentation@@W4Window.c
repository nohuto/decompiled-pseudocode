/*
 * XREFs of ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x1800365B0
 * Callers:
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x180036AB4 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035C98 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x1800362DC (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003A2A4 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18003E7AC (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  unsigned int v12; // edx
  __int64 v13; // r10
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // eax
  int v17; // r9d
  __int64 v18; // rsi
  struct CWindowData *v19; // rax
  unsigned int v20; // [rsp+20h] [rbp-28h]
  CSecondaryWindowRepresentation *v21; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v22; // [rsp+68h] [rbp+20h]

  v21 = a2;
  v4 = 0;
  if ( a4 )
  {
    v12 = v22;
    v13 = a1 + 440;
    v14 = *(unsigned int *)(a1 + 464);
    v15 = v14 + 1;
    if ( (int)v14 + 1 >= (unsigned int)v14 )
      v12 = v14 + 1;
    v4 = v15 < (unsigned int)v14 ? 0x80070216 : 0;
    if ( v15 >= (unsigned int)v14 )
    {
      if ( v12 > *(_DWORD *)(v13 + 20) )
      {
        v16 = DynArrayImpl<0>::AddMultipleAndSet(v13, 8u, 1, &v21);
        v4 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v13 + 8 * v14) = v21;
        *(_DWORD *)(v13 + 24) = v12;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xB5u);
    }
    if ( (v4 & 0x80000000) != 0 )
    {
      v20 = 6414;
LABEL_24:
      v17 = v4;
LABEL_26:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v20);
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
        v20 = 6461;
        goto LABEL_24;
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
            v20 = 6446;
LABEL_25:
            v17 = v11;
            goto LABEL_26;
          }
        }
      }
    }
  }
  else
  {
    if ( ++*(_DWORD *)(a1 + 472) != 1 )
    {
      v18 = 0LL;
      if ( !*(_DWORD *)(a1 + 576) )
        return v4;
      while ( 1 )
      {
        v19 = *(struct CWindowData **)(*(_QWORD *)(a1 + 552) + 8 * v18);
        if ( *((_BYTE *)v19 + 593) >= 0x80u )
        {
          v11 = CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(v21, v19, 1);
          v4 = v11;
          if ( v11 < 0 )
            break;
        }
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= *(_DWORD *)(a1 + 576) )
          return v4;
      }
      v20 = 6434;
      goto LABEL_25;
    }
    CWindowData::TrackOwnedWindows((CWindowData *)a1, 1);
  }
  return v4;
}
