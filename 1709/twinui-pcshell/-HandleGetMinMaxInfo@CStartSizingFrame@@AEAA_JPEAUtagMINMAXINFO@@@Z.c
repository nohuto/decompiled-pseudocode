/*
 * XREFs of ?HandleGetMinMaxInfo@CStartSizingFrame@@AEAA_JPEAUtagMINMAXINFO@@@Z @ 0x1800D0548
 * Callers:
 *     ?v_WndProc@CStartSizingFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1800D0220 (-v_WndProc@CStartSizingFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CStartSizingFrame::HandleGetMinMaxInfo(CStartSizingFrame *this, struct tagMINMAXINFO *a2)
{
  int v2; // edi
  int v5; // esi
  int v6; // eax
  int v7; // esi

  v2 = 0;
  if ( *((_DWORD *)this + 10) == 3 )
    v5 = MulDiv(8, *((_DWORD *)this + 14), 96);
  else
    v5 = 0;
  if ( *((_DWORD *)this + 10) == 3 )
    v6 = 0;
  else
    v6 = MulDiv(8, *((_DWORD *)this + 14), 96);
  a2->ptMaxTrackSize.y = v5 + v6 + *((_DWORD *)this + 26);
  if ( *((_DWORD *)this + 10) == 3 )
    v7 = MulDiv(8, *((_DWORD *)this + 14), 96);
  else
    v7 = 0;
  if ( *((_DWORD *)this + 10) != 3 )
    v2 = MulDiv(8, *((_DWORD *)this + 14), 96);
  a2->ptMinTrackSize.y = v7 + v2 + MulDiv(390, *((_DWORD *)this + 14), 96);
  return 0LL;
}
