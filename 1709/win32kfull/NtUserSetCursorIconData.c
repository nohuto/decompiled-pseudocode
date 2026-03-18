/*
 * XREFs of NtUserSetCursorIconData @ 0x1C0098670
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _SetCursorIconData @ 0x1C0098908 (_SetCursorIconData.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     ??1EnterLeaveCrit@@QEAA@XZ @ 0x1C01A0580 (--1EnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserSetCursorIconData(__int64 a1, ULONG64 a2, ULONG64 a3, _BYTE *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // esi
  unsigned int v12; // ebx
  int v13; // r8d
  ULONG64 v14; // r11
  int v15; // r9d
  unsigned __int64 v16; // rdx
  ULONG64 v17; // r10
  unsigned __int64 *v18; // rcx
  unsigned __int64 v19; // r8
  EnterLeaveCrit *v20; // rcx
  size_t Size; // [rsp+20h] [rbp-E8h]
  int v23; // [rsp+34h] [rbp-D4h]
  int v24; // [rsp+38h] [rbp-D0h]
  char v25[8]; // [rsp+40h] [rbp-C8h] BYREF
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-B8h]
  int v28; // [rsp+58h] [rbp-B0h] BYREF
  ULONG64 v29; // [rsp+60h] [rbp-A8h]
  __int128 v30; // [rsp+70h] [rbp-98h] BYREF
  __int128 v31; // [rsp+80h] [rbp-88h]
  __int128 v32; // [rsp+90h] [rbp-78h]
  __int128 v33; // [rsp+A0h] [rbp-68h]
  __int128 v34; // [rsp+B0h] [rbp-58h]
  __int128 v35; // [rsp+C0h] [rbp-48h]
  __int128 v36; // [rsp+D0h] [rbp-38h]
  __int128 v37; // [rsp+E0h] [rbp-28h]
  __int64 v38; // [rsp+F0h] [rbp-18h]

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v25);
  LOBYTE(v8) = 3;
  v9 = HMValidateHandle(a1, v8);
  v11 = v9;
  v12 = 0;
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 80) & 0x800) == 0 )
    {
      UserSetLastError(0LL, v10);
      goto LABEL_34;
    }
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v13 = *(_DWORD *)a2;
    v23 = *(_DWORD *)a2;
    v28 = *(_DWORD *)a2;
    v14 = *(_QWORD *)(a2 + 8);
    v29 = v14;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    v15 = *(_DWORD *)a3;
    v24 = *(_DWORD *)a3;
    v26 = *(_DWORD *)a3;
    v16 = *(_QWORD *)(a3 + 8);
    v27 = v16;
    if ( (v14 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (unsigned __int16)v13 + v14 + 2;
    v18 = (unsigned __int64 *)MmUserProbeAddress;
    if ( v17 >= MmUserProbeAddress || (unsigned __int16)v13 > HIWORD(v23) || (v13 & 1) != 0 || v17 <= v14 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v18 = (unsigned __int64 *)MmUserProbeAddress;
    }
    if ( (v16 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v16 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = (unsigned __int16)v15 + v16 + 2;
      if ( v19 >= *v18 || (unsigned __int16)v15 > HIWORD(v24) || (v15 & 1) != 0 || v19 <= v16 )
      {
        *(_BYTE *)*v18 = 0;
        v18 = (unsigned __int64 *)MmUserProbeAddress;
      }
    }
    if ( (unsigned __int64)a4 >= *v18 )
      a4 = (_BYTE *)*v18;
    v30 = *(_OWORD *)a4;
    v31 = *((_OWORD *)a4 + 1);
    v32 = *((_OWORD *)a4 + 2);
    v33 = *((_OWORD *)a4 + 3);
    v34 = *((_OWORD *)a4 + 4);
    v35 = *((_OWORD *)a4 + 5);
    v36 = *((_OWORD *)a4 + 6);
    v37 = *((_OWORD *)a4 + 7);
    v38 = *((_QWORD *)a4 + 16);
    if ( (DWORD2(v31) & 0xFFFFEFB0) != 0 )
    {
      UserSetLastError(1004LL, v16);
      goto LABEL_34;
    }
    if ( (BYTE8(v31) & 8) == 0 )
    {
LABEL_33:
      ProbeForRead(*((volatile void **)&v36 + 1), v12, 4u);
      LODWORD(Size) = v12;
      v12 = SetCursorIconData(v11, (int)&v28, (int)&v26, (int)&v30, Size);
      goto LABEL_34;
    }
    if ( !(WORD1(v36) | WORD3(v36))
      && *((_QWORD *)&v37 + 1) == 8LL * (int)v36
      && (_QWORD)v37 == *((_QWORD *)&v37 + 1) + 4LL * SDWORD1(v36) )
    {
      v12 = 8 * (v36 + DWORD1(v36));
      goto LABEL_33;
    }
  }
LABEL_34:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v25);
  EnterLeaveCrit::~EnterLeaveCrit(v20);
  return (int)v12;
}
