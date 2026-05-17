/*
 * XREFs of LdrpNotifyLoadOfGraph @ 0x180020E8C
 * Callers:
 *     LdrpNotifyLoadOfGraph @ 0x180020E8C (LdrpNotifyLoadOfGraph.c)
 *     LdrpPrepareModuleForExecution @ 0x180021864 (LdrpPrepareModuleForExecution.c)
 * Callees:
 *     LdrpNotifyLoadOfGraph @ 0x180020E8C (LdrpNotifyLoadOfGraph.c)
 *     LdrpSendPostSnapNotifications @ 0x180020F14 (LdrpSendPostSnapNotifications.c)
 */

__int64 __fastcall LdrpNotifyLoadOfGraph(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rax
  int v5; // ecx

  v1 = *(_QWORD **)(a1 + 40);
  if ( v1 )
  {
    v3 = *(_QWORD **)(a1 + 40);
    do
    {
      v3 = (_QWORD *)*v3;
      v4 = v3[1];
      if ( *(_DWORD *)(v4 + 56) == 6 )
      {
        v5 = LdrpNotifyLoadOfGraph(v3[1]);
      }
      else if ( *(int *)(v4 + 56) < 7 )
      {
        v5 = -1073741595;
        if ( *(_DWORD *)(v4 + 56) == -4 )
          v5 = -1073741502;
      }
      else
      {
        v5 = 0;
      }
    }
    while ( v5 >= 0 && v3 != v1 );
  }
  else
  {
    v5 = 0;
  }
  if ( v5 >= 0 )
  {
    *(_DWORD *)(a1 + 56) = 7;
    v5 = LdrpSendPostSnapNotifications(a1);
    if ( v5 < 0 )
      *(_DWORD *)(a1 + 56) = 6;
  }
  return (unsigned int)v5;
}
