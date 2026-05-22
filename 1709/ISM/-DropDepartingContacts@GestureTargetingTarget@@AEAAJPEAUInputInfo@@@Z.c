/*
 * XREFs of ?DropDepartingContacts@GestureTargetingTarget@@AEAAJPEAUInputInfo@@@Z @ 0x180015F40
 * Callers:
 *     ?RouteNextInputToTarget@GestureTargetingTarget@@QEAAJ_KPEAX1AEBUtagMsgRoutingInfo@@@Z @ 0x18001529C (-RouteNextInputToTarget@GestureTargetingTarget@@QEAAJ_KPEAX1AEBUtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z @ 0x180009424 (-GetPointersFromInput@@YAJPEAUInputInfo@@KPEAPEAUPointer@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall GestureTargetingTarget::DropDepartingContacts(GestureTargetingTarget *this, struct InputInfo *a2)
{
  __int64 v3; // rdi
  int PointersFromInput; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned int v7; // edx
  struct Pointer *v8; // r8
  __int64 v9; // r8
  struct Pointer *v10; // rdx
  unsigned int v12[4]; // [rsp+30h] [rbp-C8h] BYREF
  struct Pointer *v13[20]; // [rsp+40h] [rbp-B8h] BYREF

  v12[0] = 0;
  v3 = 0LL;
  PointersFromInput = GetPointersFromInput(a2, (__int64)a2, v13, v12);
  v6 = PointersFromInput;
  if ( PointersFromInput < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 4, 669, PointersFromInput);
LABEL_12:
    if ( (v6 & 0x80000000) == 0 )
      return v6;
    goto LABEL_16;
  }
  v7 = v12[0];
  v5 = 0LL;
  if ( v12[0] )
  {
    do
    {
      v8 = v13[v5];
      if ( *((_DWORD *)v8 + 1) )
      {
        v13[v3 + 10] = v8;
        v3 = (unsigned int)(v3 + 1);
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (_DWORD)v5 != v7 );
    if ( (_DWORD)v3 != v7 )
    {
      v9 = 0LL;
      *((_DWORD *)a2 + 12) = v3;
      if ( !(_DWORD)v3 )
        goto LABEL_14;
      do
      {
        v5 = (__int64)v13[v9 + 10];
        v10 = v13[v9];
        v9 = (unsigned int)(v9 + 1);
        *(_OWORD *)v10 = *(_OWORD *)v5;
        *((_OWORD *)v10 + 1) = *(_OWORD *)(v5 + 16);
        *((_OWORD *)v10 + 2) = *(_OWORD *)(v5 + 32);
      }
      while ( (_DWORD)v9 != (_DWORD)v3 );
    }
    if ( (_DWORD)v3 )
      goto LABEL_12;
  }
LABEL_14:
  v6 = -2147418113;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
    return v6;
  McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 4, 691, 255);
LABEL_16:
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 4, 647, v6);
  return v6;
}
