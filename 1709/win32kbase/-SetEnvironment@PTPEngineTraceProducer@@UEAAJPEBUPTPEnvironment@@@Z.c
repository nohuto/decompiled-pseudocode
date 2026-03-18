/*
 * XREFs of ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1C0138B10
 * Callers:
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012AB74 (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012BD1C (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x1C0138BB0 (-TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z.c)
 */

__int64 __fastcall PTPEngineTraceProducer::SetEnvironment(
        PTPEngineTraceProducer *this,
        const struct PTPEnvironment *a2)
{
  const struct PTPEnvironment *v2; // rdi
  __int64 result; // rax
  __int64 v5; // rcx
  _OWORD *v6; // rbx
  __int128 v7; // xmm1

  v2 = a2;
  PTPEngineTraceProducer::TraceEnvironment(this, a2);
  LODWORD(result) = (*(__int64 (__fastcall **)(_QWORD, const struct PTPEnvironment *))(**((_QWORD **)this + 3) + 8LL))(
                      *((_QWORD *)this + 3),
                      v2);
  v5 = 4LL;
  v6 = (_OWORD *)((char *)this + 40);
  do
  {
    *v6 = *(_OWORD *)v2;
    v6[1] = *((_OWORD *)v2 + 1);
    v6[2] = *((_OWORD *)v2 + 2);
    v6[3] = *((_OWORD *)v2 + 3);
    v6[4] = *((_OWORD *)v2 + 4);
    v6[5] = *((_OWORD *)v2 + 5);
    v6[6] = *((_OWORD *)v2 + 6);
    v6 += 8;
    v7 = *((_OWORD *)v2 + 7);
    v2 = (const struct PTPEnvironment *)((char *)v2 + 128);
    *(v6 - 1) = v7;
    --v5;
  }
  while ( v5 );
  *v6 = *(_OWORD *)v2;
  *((_DWORD *)v6 + 4) = *((_DWORD *)v2 + 4);
  return (unsigned int)result;
}
