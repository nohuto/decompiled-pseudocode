/*
 * XREFs of ?bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AEAAHPEAUHDEV__@@@Z @ 0x1C0281EE8
 * Callers:
 *     ?bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z @ 0x1C0281E20 (-bLoadSource@MULTISURF@@QEAAHPEAUHDEV__@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C0281E90 (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 * Callees:
 *     ?bCreateDIB@MULTISURF@@AEAAHXZ @ 0x1C0281A24 (-bCreateDIB@MULTISURF@@AEAAHXZ.c)
 */

__int64 __fastcall MULTISURF::bLoadSourceNotMetaDEVBITMAP(MULTISURF *this, HDEV a2)
{
  int v2; // eax
  __int64 result; // rax
  __int64 v5; // r8
  HDEV v6; // rcx
  struct _RECTL *v7; // r8
  struct _SURFOBJ *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  HDEV v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 6);
  if ( (v2 & 2) == 0 )
  {
    v5 = *(_QWORD *)this;
    v6 = *(HDEV *)(*(_QWORD *)this + 48LL);
    if ( v6 == a2 )
    {
      if ( (v2 & 1) != 0 )
      {
        v10 = *((_QWORD *)this + 4);
        *((_DWORD *)this + 6) = v2 & 0xFFFFFFFE;
        *(_QWORD *)(v5 + 40) = v10;
        *(_QWORD *)(*(_QWORD *)this + 24LL) = *((_QWORD *)this + 5);
        *(_DWORD *)(*(_QWORD *)this + 112LL) = *((_DWORD *)this + 12);
      }
    }
    else if ( (v2 & 1) == 0 )
    {
      if ( (v2 & 4) == 0 )
      {
        v7 = (struct _RECTL *)*((_QWORD *)this + 13);
        v8 = (struct _SURFOBJ *)*((_QWORD *)this + 12);
        v11 = v6;
        PDEVOBJ::vSync((PDEVOBJ *)&v11, v8, v7, 0);
        *((_DWORD *)this + 6) |= 4u;
      }
      v9 = *(_QWORD *)this;
      *((_DWORD *)this + 6) |= 1u;
      *(_QWORD *)(v9 + 40) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 112LL) = 0;
    }
    return 1LL;
  }
  if ( *(HDEV *)(*(_QWORD *)this + 48LL) == a2 )
  {
    *((_QWORD *)this + 12) = *(_QWORD *)this + 24LL;
    *((_QWORD *)this + 13) = (char *)this + 8;
    return 1LL;
  }
  if ( *((_QWORD *)this + 7) || (result = MULTISURF::bCreateDIB(this), (_DWORD)result) )
  {
    *((_QWORD *)this + 12) = (*((_QWORD *)this + 7) + 24LL) & -(__int64)(*((_QWORD *)this + 7) != 0LL);
    *((_QWORD *)this + 13) = (char *)this + 72;
    return 1LL;
  }
  return result;
}
