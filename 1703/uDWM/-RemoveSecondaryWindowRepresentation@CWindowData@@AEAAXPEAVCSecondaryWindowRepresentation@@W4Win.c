/*
 * XREFs of ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x1800364D4
 * Callers:
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x180036960 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x180036AB4 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAHAEBQEAVCSecondaryWindowRepresentation@@@Z @ 0x180015F00 (-Remove@-$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAHAEBQEAVCSecondaryWindowReprese.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035C98 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x1800362DC (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18003E5DC (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x18007F6B0 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     EtwppTemplate_qqd @ 0x180085DD8 (EtwppTemplate_qqd.c)
 */

void __fastcall CWindowData::RemoveSecondaryWindowRepresentation(__int64 a1, __int64 a2, int a3, char a4)
{
  int v7; // edi
  __int64 v8; // rdi
  __int64 v9; // r9
  unsigned int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  if ( a4 )
  {
    if ( dword_1800C0044
      && (unsigned __int8)(byte_1800C0048 - 1) > 2u
      && (qword_1800C0030 & 0x8000000000000001uLL) != 0
      && (qword_1800C0038 & 0x8000000000000001uLL) == qword_1800C0038 )
    {
      EtwppTemplate_qqd(a1, 1, a2, *(_QWORD *)(a1 + 40), a3);
    }
    DynArray<CSecondaryWindowRepresentation *,0>::Remove((__int64 *)(a1 + 440), &v12);
  }
  v7 = a3 - 1;
  if ( v7 )
  {
    if ( v7 == 2
      && !CWindowData::IsImmersiveWindow((CWindowData *)a1)
      && !(unsigned int)CBaseObject::Release(*(CBaseObject **)(a1 + 432)) )
    {
      CIconicBitmapRegistry::IconicRepresentationDestroyed(
        *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 26),
        (struct CWindowData *)a1);
      *(_QWORD *)(a1 + 432) = 0LL;
    }
  }
  else
  {
    --*(_DWORD *)(a1 + 472);
    LODWORD(v8) = *(_DWORD *)(a1 + 576);
LABEL_8:
    while ( (_DWORD)v8 )
    {
      v8 = (unsigned int)(v8 - 1);
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * v8);
      if ( *(_BYTE *)(v9 + 593) >= 0x80u )
      {
        if ( *(_QWORD *)(a2 + 32) )
        {
          v10 = *(_DWORD *)(a2 + 152);
          v11 = 0LL;
          if ( v10 )
          {
            while ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 128) + 8 * v11) + 32LL) != v9 )
            {
              v11 = (unsigned int)(v11 + 1);
              if ( (unsigned int)v11 >= v10 )
                goto LABEL_8;
            }
            CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation((CSecondaryWindowRepresentation *)a2, v11);
          }
        }
      }
    }
    if ( !*(_DWORD *)(a1 + 472) )
      CWindowData::TrackOwnedWindows((CWindowData *)a1, 0);
  }
}
