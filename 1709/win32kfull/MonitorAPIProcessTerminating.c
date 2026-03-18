/*
 * XREFs of MonitorAPIProcessTerminating @ 0x1C00FAD80
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@AEAAJPEAVCPhysicalMonitorHandle@@KPEAVCMutex@@@Z @ 0x1C024A6D0 (-DestroyHandleInternal@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@AEAAJPEAVCPhysicalMo.c)
 *     ?GetElement@?$CList@VCPhysicalMonitorHandle@@@@QEAAJKPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C024A7D4 (-GetElement@-$CList@VCPhysicalMonitorHandle@@@@QEAAJKPEAPEAVCPhysicalMonitorHandle@@@Z.c)
 *     ?GetNextElementIndex@?$CList@VCPhysicalMonitorHandle@@@@QEAAEKPEAK@Z @ 0x1C024A97C (-GetNextElementIndex@-$CList@VCPhysicalMonitorHandle@@@@QEAAEKPEAK@Z.c)
 */

void __fastcall MonitorAPIProcessTerminating(void *a1)
{
  char *v1; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rdx
  unsigned int i; // [rsp+48h] [rbp+10h] BYREF
  CMonitorPDO *v6; // [rsp+50h] [rbp+18h] BYREF
  char v7; // [rsp+58h] [rbp+20h] BYREF

  v1 = (char *)qword_1C0327BA0;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v7, (struct CMutex *)((char *)qword_1C0327BA0 + 32));
  if ( *((_DWORD *)v1 + 4) )
  {
    if ( !**((_QWORD **)v1 + 1) )
    {
      v4 = 0LL;
      goto LABEL_7;
    }
    v3 = 0;
    for ( i = 0; ; v3 = i )
    {
      v6 = 0LL;
      CList<CPhysicalMonitorHandle>::GetElement(v1 + 8, v3, &v6);
      if ( CMonitorPDO::DoesProcessOwnProtectedOutput(v6, a1) )
        CMonitorHandleTable<CPhysicalMonitorHandle,void *>::DestroyHandleInternal(v1 + 8, v6, v3, v1);
      v4 = v3;
LABEL_7:
      if ( !(unsigned __int8)CList<CPhysicalMonitorHandle>::GetNextElementIndex(v1 + 8, v4, &i) )
        break;
    }
  }
  CAutoMutex::~CAutoMutex((CAutoMutex *)&v7);
}
