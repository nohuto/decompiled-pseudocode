/*
 * XREFs of NtUserGetRawInputDeviceInfo @ 0x1C0112FB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceInfo(__int64 a1, int a2, ULONG64 a3, unsigned int *a4)
{
  unsigned int *v8; // rax
  SIZE_T v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // r8
  unsigned int v16; // ebx
  unsigned int v17; // r14d
  ULONG64 v18; // rcx
  int v19; // r12d
  int v20; // r12d
  int v21; // r12d
  _BYTE *v22; // rdx
  _BYTE *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v27; // rcx
  _BYTE v28[48]; // [rsp+60h] [rbp-48h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v28);
  v8 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v8 = (unsigned int *)MmUserProbeAddress;
  v9 = *v8;
  EnterDeviceInfoListCrit_();
  LOBYTE(v10) = 19;
  v14 = HMValidateHandle(a1, v10, v11, v12);
  v16 = 0;
  if ( !v14 )
  {
    v27 = 6LL;
    goto LABEL_46;
  }
  if ( a2 != 536870917 )
  {
    switch ( a2 )
    {
      case 536870919:
        v17 = (*(unsigned __int16 *)(v14 + 208) >> 1) + 1;
        goto LABEL_7;
      case 536870923:
        v17 = 32;
        goto LABEL_7;
      case 536870924:
        v17 = 44;
        goto LABEL_7;
    }
    v27 = 87LL;
LABEL_46:
    UserSetLastError(v27, v13);
    v16 = -1;
    goto LABEL_38;
  }
  if ( *(_BYTE *)(v14 + 48) == 2 )
    v17 = *(_DWORD *)(*(_QWORD *)(v14 + 456) + 104LL);
  else
    v17 = 0;
LABEL_7:
  if ( a3 )
  {
    if ( (unsigned int)v9 < v17 )
    {
      v16 = -1;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (unsigned int *)MmUserProbeAddress;
      *a4 = v17;
      UserSetLastError(122LL, v13);
    }
    else
    {
      ProbeForWrite((volatile void *)a3, v9, 4u);
      v19 = a2 - 536870917;
      if ( !v19 )
      {
        if ( *(_BYTE *)(v14 + 48) == 2 )
          memmove((void *)a3, *(const void **)(*(_QWORD *)(v14 + 456) + 16LL), v17);
        goto LABEL_37;
      }
      v20 = v19 - 2;
      if ( v20 )
      {
        v21 = v20 - 4;
        if ( v21 )
        {
          if ( v21 != 1 )
            goto LABEL_37;
          if ( (_DWORD)v9 == v17 )
          {
            if ( (a3 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v23 = (_BYTE *)a3;
            if ( a3 >= MmUserProbeAddress )
              v23 = (_BYTE *)MmUserProbeAddress;
            *v23 = *v23;
            v23[43] = v23[43];
            memset((void *)a3, 0, 0x2CuLL);
            RIMFillDeviceHealthInfo(a3, v14);
            goto LABEL_37;
          }
        }
        else if ( (_DWORD)v9 == v17 )
        {
          if ( (a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v22 = (_BYTE *)a3;
          if ( a3 >= MmUserProbeAddress )
            v22 = (_BYTE *)MmUserProbeAddress;
          *v22 = *v22;
          v22[31] = v22[31];
          memset((void *)a3, 0, 0x20uLL);
          *(_DWORD *)a3 = v17;
          v18 = *(unsigned __int8 *)(v14 + 48);
          if ( *(_BYTE *)(v14 + 48) )
          {
            v18 = (unsigned int)(v18 - 1);
            if ( (_DWORD)v18 )
            {
              if ( (_DWORD)v18 == 1 )
              {
                *(_DWORD *)(a3 + 4) = 2;
                *(_DWORD *)(a3 + 8) = *(unsigned __int16 *)(*(_QWORD *)(v14 + 456) + 110LL);
                *(_DWORD *)(a3 + 12) = *(unsigned __int16 *)(*(_QWORD *)(v14 + 456) + 112LL);
                *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(*(_QWORD *)(v14 + 456) + 114LL);
                *(_WORD *)(a3 + 20) = *(_WORD *)(*(_QWORD *)(v14 + 456) + 42LL);
                v18 = *(unsigned __int16 *)(*(_QWORD *)(v14 + 456) + 40LL);
                *(_WORD *)(a3 + 22) = v18;
              }
            }
            else
            {
              *(_DWORD *)(a3 + 4) = 1;
              *(_DWORD *)(a3 + 8) = *(_DWORD *)(v14 + 484);
              *(_DWORD *)(a3 + 12) = *(_DWORD *)(v14 + 488);
              *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(v14 + 458);
              *(_DWORD *)(a3 + 20) = *(unsigned __int16 *)(v14 + 460);
              *(_DWORD *)(a3 + 24) = *(unsigned __int16 *)(v14 + 462);
              *(_DWORD *)(a3 + 28) = *(unsigned __int16 *)(v14 + 464);
            }
          }
          else
          {
            *(_DWORD *)(a3 + 4) = 0;
            *(_DWORD *)(a3 + 8) = *(_WORD *)(v14 + 456) & 0x7FFF;
            *(_DWORD *)(a3 + 12) = *(unsigned __int16 *)(v14 + 458);
            *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(v14 + 460);
            *(_DWORD *)(a3 + 20) = *(unsigned __int16 *)(v14 + 456) >> 15;
          }
          goto LABEL_37;
        }
        v16 = -1;
        UserSetLastError(87LL, v13);
      }
      else
      {
        if ( v17 > 2 )
        {
          memmove((void *)a3, *(const void **)(v14 + 216), *(unsigned __int16 *)(v14 + 208));
          *(_WORD *)(a3 + 2) = 92;
          *(_WORD *)(a3 + 2LL * (v17 - 1)) = 0;
LABEL_37:
          v16 = v17;
          goto LABEL_38;
        }
        v16 = -1;
      }
    }
  }
  else
  {
    v18 = MmUserProbeAddress;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (unsigned int *)MmUserProbeAddress;
    *a4 = v17;
  }
LABEL_38:
  LeaveDeviceInfoListCrit_(v18, v13, v15);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v28);
  UserSessionSwitchLeaveCrit(v25, v24);
  return v16;
}
