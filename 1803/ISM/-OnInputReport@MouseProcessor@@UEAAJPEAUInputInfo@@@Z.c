/*
 * XREFs of ?OnInputReport@MouseProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18006A760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::OnInputReport(MouseProcessor *this, struct InputInfo *a2)
{
  int v3; // eax
  char v4; // al
  bool v5; // cf
  __int16 v6; // ax
  int v7; // r8d
  __int16 v8; // ax
  int v9; // r8d
  __int16 v10; // ax
  __int16 v11; // ax
  __int16 v12; // ax
  __int64 *v13; // r9
  char *v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rcx

  if ( (*(_DWORD *)a2 & 2) == 0 )
    return 2147942487LL;
  v3 = *((_DWORD *)a2 + 133);
  if ( (*((_BYTE *)a2 + 522) & 1) != 0 )
  {
    *((_DWORD *)a2 + 16) = v3;
    *((_DWORD *)a2 + 17) = *((_DWORD *)a2 + 134);
    *((_DWORD *)this + 10) = *((_DWORD *)a2 + 16);
    *((_DWORD *)this + 11) = *((_DWORD *)a2 + 17);
  }
  else
  {
    *((_DWORD *)this + 12) = v3;
    *((_DWORD *)this + 13) = *((_DWORD *)a2 + 134);
  }
  v4 = *((_BYTE *)a2 + 1720);
  *((_BYTE *)this + 60) = v4;
  v5 = v4 != 0;
  v6 = *((_WORD *)a2 + 262);
  v7 = v5 ? 32 : 16;
  if ( (v6 & 1) != 0 )
  {
    *((_DWORD *)this + 14) |= v7;
  }
  else if ( (v6 & 2) != 0 )
  {
    *((_DWORD *)this + 14) &= ~v7;
  }
  v8 = *((_WORD *)a2 + 262);
  v9 = *((_BYTE *)this + 60) != 0 ? 16 : 32;
  if ( (v8 & 4) != 0 )
  {
    *((_DWORD *)this + 14) |= v9;
  }
  else if ( (v8 & 8) != 0 )
  {
    *((_DWORD *)this + 14) &= ~v9;
  }
  v10 = *((_WORD *)a2 + 262);
  if ( (v10 & 0x10) != 0 )
  {
    *((_DWORD *)this + 14) |= 0x40u;
  }
  else if ( (v10 & 0x20) != 0 )
  {
    *((_DWORD *)this + 14) &= ~0x40u;
  }
  v11 = *((_WORD *)a2 + 262);
  if ( (v11 & 0x40) != 0 )
  {
    *((_DWORD *)this + 14) |= 0x80u;
  }
  else if ( (v11 & 0x80u) != 0 )
  {
    *((_DWORD *)this + 14) &= ~0x80u;
  }
  v12 = *((_WORD *)a2 + 262);
  if ( (v12 & 0x100) != 0 )
  {
    *((_DWORD *)this + 14) |= 0x100u;
  }
  else if ( (v12 & 0x200) != 0 )
  {
    *((_DWORD *)this + 14) &= ~0x100u;
  }
  v13 = (__int64 *)*((_QWORD *)this + 137);
  v15 = (char *)this + 40;
  if ( v13 )
  {
    v16 = *v13;
    v17 = (__int64 *)*((_QWORD *)this + 137);
  }
  else
  {
    v17 = (__int64 *)((char *)this - 8);
    v16 = *v17;
  }
  return (*(__int64 (__fastcall **)(__int64 *, char *, struct InputInfo *))(v16 + 24))(v17, v15, a2);
}
