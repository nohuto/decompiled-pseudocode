/*
 * XREFs of ?RuntimeClassInitialize@HitTestRequest@@QEAAJPEAUIDisplayBinding@@PEAUIInputTarget@@1AEBUInputInfo@@K@Z @ 0x180022BDC
 * Callers:
 *     ??$MakeAndInitialize@VHitTestRequest@@UIHitTestRequest@@PEAUIDisplayBinding@@AEAPEAUIInputTarget@@PEAU4@AEAUInputInfo@@AEAK@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIHitTestRequest@@@WRL@Microsoft@@@012@$$QEAPEAUIDisplayBinding@@AEAPEAUIInputTarget@@$$QEAPEAU5@AEAUInputInfo@@AEAK@Z @ 0x18001F1D0 (--$MakeAndInitialize@VHitTestRequest@@UIHitTestRequest@@PEAUIDisplayBinding@@AEAPEAUIInputTarget.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HitTestRequest::RuntimeClassInitialize(
        HitTestRequest *this,
        struct IDisplayBinding *a2,
        struct IInputTarget *a3,
        struct IInputTarget *a4,
        const struct InputInfo *a5,
        unsigned int a6)
{
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _OWORD *v14; // rax
  __int64 v15; // rdx
  __int128 v16; // xmm1

  if ( *((struct IDisplayBinding **)this + 2) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IDisplayBinding *))(*(_QWORD *)a2 + 8LL))(a2);
    v10 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = a2;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( *((struct IInputTarget **)this + 3) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a3 + 8LL))(a3);
    v11 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = a3;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( *((struct IInputTarget **)this + 4) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a4 + 8LL))(a4);
    v12 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = a4;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v14 = (_OWORD *)((char *)this + 40);
  v15 = 22LL;
  do
  {
    *v14 = *(_OWORD *)a5;
    v14[1] = *((_OWORD *)a5 + 1);
    v14[2] = *((_OWORD *)a5 + 2);
    v14[3] = *((_OWORD *)a5 + 3);
    v14[4] = *((_OWORD *)a5 + 4);
    v14[5] = *((_OWORD *)a5 + 5);
    v14[6] = *((_OWORD *)a5 + 6);
    v14 += 8;
    v16 = *((_OWORD *)a5 + 7);
    a5 = (const struct InputInfo *)((char *)a5 + 128);
    *(v14 - 1) = v16;
    --v15;
  }
  while ( v15 );
  *v14 = *(_OWORD *)a5;
  v14[1] = *((_OWORD *)a5 + 1);
  *((_DWORD *)this + 722) = a6;
  return 0LL;
}
