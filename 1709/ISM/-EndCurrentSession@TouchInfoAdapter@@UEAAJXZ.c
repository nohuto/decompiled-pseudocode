/*
 * XREFs of ?EndCurrentSession@TouchInfoAdapter@@UEAAJXZ @ 0x180072140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchInfoAdapter::EndCurrentSession(TouchInfoAdapter *this)
{
  char *v1; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  __int64 v6; // rdx

  v1 = (char *)this + 128;
  *((_WORD *)this + 65) |= 4u;
  v3 = 0LL;
  if ( *((_BYTE *)this + 151) )
  {
    do
    {
      v4 = 56LL * (unsigned int)v3;
      if ( (v1[v4 + 26] & 3) != 0 )
        *(_WORD *)&v1[v4 + 26] = 4;
      else
        *(_WORD *)&v1[v4 + 26] = 0;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < (unsigned __int8)v1[23] );
  }
  (*(void (__fastcall **)(_QWORD, char *, __int64))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), v1, v3);
  ++*((_DWORD *)this + 30);
  v5 = (_DWORD *)((char *)this + 36);
  *((_BYTE *)this + 712) = 0;
  *((_WORD *)this + 62) = 0;
  v6 = 10LL;
  do
  {
    *v5 = *((_DWORD *)this + 29);
    v5 += 2;
    --v6;
  }
  while ( v6 );
  return 0LL;
}
