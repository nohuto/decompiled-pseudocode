/*
 * XREFs of ??$PaneDidntShowInSpecifiedTime@AEBW4ViewType@@AEBI@CommonPeopleTelemetry@@SAXAEBW4ViewType@@AEBI@Z @ 0x180116900
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_79ac24caad3d17282936a32724f51f69___::Run @ 0x180117D70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_79ac24caad3d17282936a32724f51f69___--Run.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CommonPeopleTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800AC01C (-Provider@CommonPeopleTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall CommonPeopleTelemetry::PaneDidntShowInSpecifiedTime<enum ViewType const &,unsigned int const &>(int *a1)
{
  const struct _TlgProvider_t *v2; // rax
  const struct _TlgProvider_t *v3; // rcx
  int v4; // eax
  int v6; // [rsp+30h] [rbp-68h] BYREF
  int v7; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  int *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v2 = CommonPeopleTelemetryLogging::Provider();
  v3 = v2;
  if ( *(_DWORD *)v2 > 5u )
  {
    LODWORD(v2) = 0;
    if ( (*((_QWORD *)v3 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v3 + 3) & 0x400000000000LL) == *((_QWORD *)v3 + 3) )
    {
      v4 = *a1;
      v11 = 0;
      v14 = 0;
      v6 = v4;
      v9 = &v6;
      v12 = &v7;
      v10 = 4;
      v7 = 5000;
      v13 = 4;
      LODWORD(v2) = TlgWrite(v3, &unk_1802602F2, 0LL, 0LL, 4u, &pData);
    }
  }
  return (int)v2;
}
