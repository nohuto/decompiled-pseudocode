/*
 * XREFs of NtMITInjectLegacyISMTouchFrame @ 0x1C00E6840
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0016920 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     InjectLegacyISMTouch @ 0x1C013007C (InjectLegacyISMTouch.c)
 */

__int64 __fastcall NtMITInjectLegacyISMTouchFrame(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  CInputThread *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edi
  _OWORD *v11; // rsi
  _OWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  _OWORD *v15; // rcx
  _OWORD *v16; // rax
  _BYTE v18[24]; // [rsp+38h] [rbp-400h] BYREF
  _BYTE v19[992]; // [rsp+50h] [rbp-3E8h] BYREF
  __int64 v20; // [rsp+448h] [rbp+10h] BYREF
  _OWORD *v21; // [rsp+450h] [rbp+18h]

  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v20, a2, a3, a4);
  if ( CInputThread::IsInputThread(v5) )
  {
    v11 = Win32AllocPoolWithQuotaZInit(0x3D8uLL, 0x7A747355u);
    v21 = v11;
    if ( v11 )
    {
      if ( (_OWORD *)((char *)a1 + 984) < a1 || (unsigned __int64)a1 + 984 > MmUserProbeAddress )
        a1 = (_OWORD *)MmUserProbeAddress;
      v12 = v19;
      v13 = 7LL;
      v14 = 7LL;
      do
      {
        *v12 = *a1;
        v12[1] = a1[1];
        v12[2] = a1[2];
        v12[3] = a1[3];
        v12[4] = a1[4];
        v12[5] = a1[5];
        v12[6] = a1[6];
        v12 += 8;
        *(v12 - 1) = a1[7];
        a1 += 8;
        --v14;
      }
      while ( v14 );
      *v12 = *a1;
      v12[1] = a1[1];
      v12[2] = a1[2];
      v12[3] = a1[3];
      v12[4] = a1[4];
      *((_QWORD *)v12 + 10) = *((_QWORD *)a1 + 10);
      v15 = v11;
      v16 = v19;
      do
      {
        *v15 = *v16;
        v15[1] = v16[1];
        v15[2] = v16[2];
        v15[3] = v16[3];
        v15[4] = v16[4];
        v15[5] = v16[5];
        v15[6] = v16[6];
        v15 += 8;
        *(v15 - 1) = v16[7];
        v16 += 8;
        --v13;
      }
      while ( v13 );
      *v15 = *v16;
      v15[1] = v16[1];
      v15[2] = v16[2];
      v15[3] = v16[3];
      v15[4] = v16[4];
      *((_QWORD *)v15 + 10) = *((_QWORD *)v16 + 10);
      PushW32ThreadLock(v11, v18, Win32FreePool);
      v10 = InjectLegacyISMTouch(v11);
      PopW32ThreadLock(v18);
      Win32FreePool((__int64)v11);
    }
    else
    {
      v10 = -1073741823;
    }
  }
  else
  {
    v10 = 5;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v10;
}
