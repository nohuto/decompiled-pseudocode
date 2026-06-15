/*
 * XREFs of ??0CCrossProcessBaseClientEndpoint@@QEAA@XZ @ 0x14004F7EC
 * Callers:
 *     ??0CCrossProcessClientInputEndpoint@@QEAA@XZ @ 0x14004F854 (--0CCrossProcessClientInputEndpoint@@QEAA@XZ.c)
 *     ??0CCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x14004F8F4 (--0CCrossProcessClientOutputEndpoint@@QEAA@XZ.c)
 * Callees:
 *     ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x1400183C0 (--0CCrossProcessBaseEndpoint@@IEAA@XZ.c)
 */

CCrossProcessBaseClientEndpoint *__fastcall CCrossProcessBaseClientEndpoint::CCrossProcessBaseClientEndpoint(
        CCrossProcessBaseClientEndpoint *this)
{
  CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint(this);
  *((_QWORD *)this + 51) = 0LL;
  *((_DWORD *)this + 106) = 0;
  *(_QWORD *)this = &CCrossProcessBaseClientEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseClientEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 48) = &CCrossProcessBaseClientEndpoint::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  *((_QWORD *)this + 49) = &CCrossProcessBaseClientEndpoint::`vftable'{for `IAudioClock'};
  *((_QWORD *)this + 50) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioClock2'};
  return this;
}
