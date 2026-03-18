/*
 * XREFs of ?CleanUpDelayZonesOnThreadExit@DelayZonePalmRejection@@QEAAXQEAUtagTHREADINFO@@@Z @ 0x1C0062B00
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C012D4E0 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 */

void __fastcall DelayZonePalmRejection::CleanUpDelayZonesOnThreadExit(
        DelayZonePalmRejection *this,
        struct tagTHREADINFO *const a2)
{
  struct CPalmRejectZoneInfo *v2; // rdi
  struct CPalmRejectZoneInfo *v4; // rbx
  __int64 v6; // rax
  struct CPalmRejectZoneInfo *v7; // r8
  struct CPalmRejectZoneInfo *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (DelayZonePalmRejection *)((char *)this + 72);
  v4 = (struct CPalmRejectZoneInfo *)*((_QWORD *)this + 9);
  while ( v4 != v2 )
  {
    v6 = *(_QWORD *)a2;
    v7 = v4;
    v8 = v4;
    v4 = *(struct CPalmRejectZoneInfo **)v4;
    if ( *((_QWORD *)v7 + 2) == v6 )
      DelayZonePalmRejection::RemoveDelayZoneFromListInternal(this, &v8);
  }
}
