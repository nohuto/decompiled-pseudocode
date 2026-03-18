/*
 * XREFs of NtUserGetLayeredWindowAttributes @ 0x1C01E61A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetLayeredWindowAttributes @ 0x1C012B134 (_GetLayeredWindowAttributes.c)
 */

__int64 __fastcall NtUserGetLayeredWindowAttributes(__int64 a1, _DWORD *a2, _BYTE *a3, _DWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  int LayeredWindowAttributes; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  BYTE v15[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+24h] [rbp-34h] BYREF
  unsigned int v17[6]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v18[24]; // [rsp+40h] [rbp-18h] BYREF

  v16 = 0;
  v15[0] = 0;
  v17[0] = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v18);
  v8 = ValidateHwnd(a1);
  v9 = v8;
  if ( !v8 )
    goto LABEL_2;
  if ( (unsigned int)IsWindowDesktopComposed(v8) && (*(_DWORD *)(v9 + 304) & 0x20) != 0 )
  {
    UserSetLastError(87LL, v11);
LABEL_2:
    LayeredWindowAttributes = 0;
    goto LABEL_19;
  }
  LayeredWindowAttributes = GetLayeredWindowAttributes(v9, &v16, v15, v17);
  if ( LayeredWindowAttributes )
  {
    if ( a2 )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v16;
    }
    if ( a3 )
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_BYTE *)MmUserProbeAddress;
      *a3 = v15[0];
    }
    if ( a4 )
    {
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = v17[0] & 3;
    }
  }
LABEL_19:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v18);
  UserSessionSwitchLeaveCrit(v13, v12);
  return LayeredWindowAttributes;
}
