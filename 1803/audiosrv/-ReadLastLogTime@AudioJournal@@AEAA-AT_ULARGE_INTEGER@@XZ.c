/*
 * XREFs of ?ReadLastLogTime@AudioJournal@@AEAA?AT_ULARGE_INTEGER@@XZ @ 0x180049DB8
 * Callers:
 *     ?Initialize@AudioJournal@@AEAAXXZ @ 0x18002A4E8 (-Initialize@AudioJournal@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

union _ULARGE_INTEGER __fastcall AudioJournal::ReadLastLogTime(AudioJournal *this, _DWORD *a2)
{
  int ValueW; // eax
  bool v5; // sf
  int v6; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v8; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+54h] [rbp+Ch]

  v9 = HIDWORD(this);
  *a2 = 0;
  v8 = 8;
  a2[1] = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Audio\\Journal",
             L"LastLogTime",
             0x48u,
             0LL,
             a2,
             &v8);
  if ( ValueW )
  {
    *(_QWORD *)a2 = 0LL;
    if ( ValueW != 2 )
    {
      v5 = ValueW < 0;
      if ( ValueW > 0 )
      {
        ValueW = (unsigned __int16)ValueW | 0x80070000;
        v5 = ValueW < 0;
      }
      if ( v5 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x174,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
          (const char *)(unsigned int)ValueW,
          v6);
    }
  }
  return (union _ULARGE_INTEGER)a2;
}
