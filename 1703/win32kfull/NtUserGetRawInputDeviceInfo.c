/*
 * XREFs of NtUserGetRawInputDeviceInfo @ 0x1C0109DD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetRawInputDeviceInfo(__int64 a1, int a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int *v8; // rax
  SIZE_T v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // esi
  int v13; // r12d
  int v14; // r12d
  int v15; // r12d
  unsigned int *v16; // rdx
  unsigned int v17; // ebx
  unsigned int *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // rcx
  char v25[8]; // [rsp+48h] [rbp-60h] BYREF
  int v26; // [rsp+50h] [rbp-58h]

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v25);
  v8 = a4;
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    v8 = (unsigned int *)W32UserProbeAddress;
  v9 = *v8;
  v26 = *v8;
  EnterDeviceInfoListCrit_(W32UserProbeAddress);
  v11 = HMValidateHandle(a1, 19);
  if ( !v11 )
  {
    v24 = 6LL;
    goto LABEL_48;
  }
  if ( a2 != 536870917 )
  {
    switch ( a2 )
    {
      case 536870919:
        v12 = (*(unsigned __int16 *)(v11 + 208) >> 1) + 1;
        goto LABEL_7;
      case 536870923:
        v12 = 32;
        goto LABEL_7;
      case 536870924:
        v12 = 44;
        goto LABEL_7;
    }
    v24 = 87LL;
LABEL_48:
    UserSetLastError(v24);
    v17 = -1;
    goto LABEL_38;
  }
  if ( *(_BYTE *)(v11 + 48) == 2 )
    v12 = *(_DWORD *)(*(_QWORD *)(v11 + 456) + 104LL);
  else
    v12 = 0;
LABEL_7:
  if ( a3 )
  {
    if ( (unsigned int)v9 >= v12 )
    {
      ProbeForWrite(a3, v9, 4u);
      v13 = a2 - 536870917;
      if ( !v13 )
      {
        if ( *(_BYTE *)(v11 + 48) == 2 )
          memmove(a3, *(const void **)(*(_QWORD *)(v11 + 456) + 16LL), v12);
        goto LABEL_37;
      }
      v14 = v13 - 2;
      if ( !v14 )
      {
        if ( v12 <= 2 )
        {
          v17 = -1;
          goto LABEL_38;
        }
        memmove(a3, *(const void **)(v11 + 216), *(unsigned __int16 *)(v11 + 208));
        *((_WORD *)a3 + 1) = 92;
        *((_WORD *)a3 + v12 - 1) = 0;
        goto LABEL_37;
      }
      v15 = v14 - 4;
      if ( v15 )
      {
        if ( v15 != 1 )
        {
LABEL_37:
          v17 = v12;
          goto LABEL_38;
        }
        if ( (_DWORD)v9 == v12 )
        {
          if ( ((unsigned __int8)a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v18 = a3;
          if ( (unsigned __int64)a3 >= W32UserProbeAddress )
            v18 = (unsigned int *)W32UserProbeAddress;
          *(_BYTE *)v18 = *(_BYTE *)v18;
          *((_BYTE *)v18 + 43) = *((_BYTE *)v18 + 43);
          memset(a3, 0, 0x2CuLL);
          RIMFillDeviceHealthInfo(a3, v11);
          goto LABEL_37;
        }
      }
      else if ( (_DWORD)v9 == v12 )
      {
        if ( ((unsigned __int8)a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = a3;
        if ( (unsigned __int64)a3 >= W32UserProbeAddress )
          v16 = (unsigned int *)W32UserProbeAddress;
        *(_BYTE *)v16 = *(_BYTE *)v16;
        *((_BYTE *)v16 + 31) = *((_BYTE *)v16 + 31);
        memset(a3, 0, 0x20uLL);
        *a3 = v12;
        v10 = *(unsigned __int8 *)(v11 + 48);
        if ( *(_BYTE *)(v11 + 48) )
        {
          v10 = (unsigned int)(v10 - 1);
          if ( (_DWORD)v10 )
          {
            if ( (_DWORD)v10 == 1 )
            {
              a3[1] = 2;
              a3[2] = *(unsigned __int16 *)(*(_QWORD *)(v11 + 456) + 110LL);
              a3[3] = *(unsigned __int16 *)(*(_QWORD *)(v11 + 456) + 112LL);
              a3[4] = *(unsigned __int16 *)(*(_QWORD *)(v11 + 456) + 114LL);
              *((_WORD *)a3 + 10) = *(_WORD *)(*(_QWORD *)(v11 + 456) + 42LL);
              v10 = *(unsigned __int16 *)(*(_QWORD *)(v11 + 456) + 40LL);
              *((_WORD *)a3 + 11) = v10;
            }
          }
          else
          {
            a3[1] = 1;
            a3[2] = *(_DWORD *)(v11 + 484);
            a3[3] = *(_DWORD *)(v11 + 488);
            a3[4] = *(unsigned __int16 *)(v11 + 458);
            a3[5] = *(unsigned __int16 *)(v11 + 460);
            a3[6] = *(unsigned __int16 *)(v11 + 462);
            a3[7] = *(unsigned __int16 *)(v11 + 464);
          }
        }
        else
        {
          a3[1] = 0;
          a3[2] = *(_WORD *)(v11 + 456) & 0x7FFF;
          a3[3] = *(unsigned __int16 *)(v11 + 458);
          a3[4] = *(unsigned __int16 *)(v11 + 460);
          a3[5] = *(unsigned __int16 *)(v11 + 456) >> 15;
        }
        goto LABEL_37;
      }
      v17 = -1;
      UserSetLastError(87LL);
      goto LABEL_38;
    }
    v17 = -1;
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (unsigned int *)W32UserProbeAddress;
    *a4 = v12;
    UserSetLastError(122LL);
  }
  else
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (unsigned int *)W32UserProbeAddress;
    *a4 = v12;
    v17 = 0;
  }
LABEL_38:
  LeaveDeviceInfoListCrit_(v10);
  if ( !v25[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v25);
  }
  UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  return v17;
}
