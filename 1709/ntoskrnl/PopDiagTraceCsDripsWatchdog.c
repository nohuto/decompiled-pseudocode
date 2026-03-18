/*
 * XREFs of PopDiagTraceCsDripsWatchdog @ 0x140245140
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x14070A8CC (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceCsDripsWatchdog(
        int a1,
        int a2,
        int a3,
        unsigned __int8 a4,
        char a5,
        unsigned __int8 a6,
        char a7,
        unsigned __int16 *a8,
        unsigned __int16 *a9,
        char a10,
        char a11)
{
  _UNKNOWN **v11; // rax
  REGHANDLE v13; // rbx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // ax
  int v17; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+4Ch] [rbp-BCh] BYREF
  int v19; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+54h] [rbp-B4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  int *v22; // [rsp+68h] [rbp-A0h]
  __int64 v23; // [rsp+70h] [rbp-98h]
  int *v24; // [rsp+78h] [rbp-90h]
  __int64 v25; // [rsp+80h] [rbp-88h]
  int *v26; // [rsp+88h] [rbp-80h]
  __int64 v27; // [rsp+90h] [rbp-78h]
  char *v28; // [rsp+98h] [rbp-70h]
  __int64 v29; // [rsp+A0h] [rbp-68h]
  int *v30; // [rsp+A8h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-58h]
  char *v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  int *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  __int64 v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  int *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  __int64 v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  char *v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+8h]
  char *v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  _UNKNOWN *retaddr; // [rsp+150h] [rbp+48h] BYREF
  int v47; // [rsp+158h] [rbp+50h] BYREF
  int v48; // [rsp+160h] [rbp+58h] BYREF
  int v49; // [rsp+168h] [rbp+60h] BYREF

  v11 = &retaddr;
  v49 = a3;
  v48 = a2;
  v47 = a1;
  if ( PopDiagHandleRegistered )
  {
    v13 = PopDiagHandle;
    LOBYTE(v11) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_DRIPS_WATCHDOG);
    if ( (_BYTE)v11 )
    {
      v20 = a6;
      v19 = a4;
      UserData.Ptr = (ULONGLONG)&v47;
      v22 = &v48;
      v24 = &v49;
      v26 = &v19;
      v28 = &a5;
      v30 = &v20;
      v32 = &a7;
      *(_QWORD *)&UserData.Size = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 1LL;
      v35 = 2LL;
      if ( a8 )
      {
        v14 = *a8;
        v37 = *a8;
        LOWORD(v17) = v14 >> 1;
        v34 = &v17;
        v36 = *((_QWORD *)a8 + 1);
      }
      else
      {
        LOWORD(v17) = 0;
        v34 = &v17;
        v36 = 0LL;
        v37 = 0LL;
      }
      v39 = 2LL;
      if ( a9 )
      {
        v15 = *a9;
        v41 = *a9;
        LOWORD(v18) = v15 >> 1;
        v38 = &v18;
        v40 = *((_QWORD *)a9 + 1);
      }
      else
      {
        LOWORD(v18) = 0;
        v38 = &v18;
        v40 = 0LL;
        v41 = 0LL;
      }
      v43 = 4LL;
      v42 = &a10;
      v45 = 4LL;
      v44 = &a11;
      LOBYTE(v11) = EtwWriteEx(v13, &POP_ETW_EVENT_CS_DRIPS_WATCHDOG, 0LL, 0, 0LL, 0LL, 0xDu, &UserData);
    }
  }
  return (char)v11;
}
