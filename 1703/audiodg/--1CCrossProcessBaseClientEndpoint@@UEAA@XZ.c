/*
 * XREFs of ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x140050480
 * Callers:
 *     ??1CCrossProcessClientInputEndpoint@@UEAA@XZ @ 0x1400504F4 (--1CCrossProcessClientInputEndpoint@@UEAA@XZ.c)
 *     ??_GCCrossProcessBaseClientEndpoint@@UEAAPEAXI@Z @ 0x1400508F0 (--_GCCrossProcessBaseClientEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCrossProcessBaseClientEndpoint::~CCrossProcessBaseClientEndpoint(
        CCrossProcessBaseClientEndpoint *this)
{
  char *v2; // rcx

  *(_QWORD *)this = &CCrossProcessBaseClientEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseClientEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 48) = &CCrossProcessBaseClientEndpoint::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  *((_QWORD *)this + 49) = &CCrossProcessBaseClientEndpoint::`vftable'{for `IAudioClock'};
  *((_QWORD *)this + 50) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioClock2'};
  v2 = (char *)*((_QWORD *)this + 51);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 51) = 0LL;
  }
  CCrossProcessBaseEndpoint::~CCrossProcessBaseEndpoint(this);
}
