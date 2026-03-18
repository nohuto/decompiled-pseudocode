/*
 * XREFs of ??1WO_CLEANUP@@QEAA@XZ @ 0x1C02664B8
 * Callers:
 *     EngCreateWnd @ 0x1C0266C10 (EngCreateWnd.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008F1D0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall WO_CLEANUP::~WO_CLEANUP(WO_CLEANUP *this, __int64 a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  REGION *v6; // rcx
  REGION *v7; // rcx
  REGION *v8; // rcx
  __int64 v9; // rcx

  if ( !*(_DWORD *)this )
  {
    v3 = (_DWORD *)*((_QWORD *)this + 1);
    if ( v3 )
    {
      *v3 = 0;
      Win32FreePool(*((_QWORD *)this + 1), a2);
    }
    v4 = *((_QWORD *)this + 2);
    if ( v4 )
    {
      *(_DWORD *)(v4 + 152) = 0;
      Win32FreePool(*((_QWORD *)this + 2), a2);
    }
    v5 = *((_QWORD *)this + 3);
    if ( v5 )
    {
      *(_DWORD *)(v5 + 152) = 0;
      Win32FreePool(*((_QWORD *)this + 3), a2);
    }
    v6 = (REGION *)*((_QWORD *)this + 4);
    if ( v6 )
      REGION::vDeleteREGION(v6);
    v7 = (REGION *)*((_QWORD *)this + 5);
    if ( v7 )
      REGION::vDeleteREGION(v7);
    v8 = (REGION *)*((_QWORD *)this + 6);
    if ( v8 )
      REGION::vDeleteREGION(v8);
    v9 = *((_QWORD *)this + 7);
    if ( v9 )
      GreDeleteSemaphore(v9);
  }
}
