/*
 * XREFs of ?BuildAccelerationCurve@CTouchpadAcceleration@@UEAAXPEAUtagMONITOR@@@Z @ 0x1C0074060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTouchpadAcceleration::BuildAccelerationCurve(CTouchpadAcceleration *this, struct tagMONITOR *a2)
{
  unsigned int v4; // eax
  unsigned __int64 v5; // r10
  unsigned __int16 v6; // ax
  unsigned int v7; // r11d
  __int64 *v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned int v12; // r9d
  _QWORD *v13; // r8
  __int64 v14; // r11
  __int64 v15; // rcx
  __int64 v16; // rax

  if ( *((_BYTE *)this + 8) )
  {
    v4 = qword_1C018A108;
    if ( !(_DWORD)qword_1C018A108 )
    {
      v4 = *((_DWORD *)this + 24);
      LODWORD(qword_1C018A108) = v4;
    }
    v5 = ((unsigned __int64)v4 << 16) / 0xA;
    if ( __CFSHR__(HIDWORD(qword_1C018A108), 7) )
      v6 = *((_WORD *)a2 + 56);
    else
      v6 = *(_WORD *)(*((_QWORD *)a2 + 5) + 128LL);
    if ( v6 < 0x60u )
    {
      if ( __CFSHR__(HIDWORD(qword_1C018A108), 7) )
        v6 = *(_WORD *)(*((_QWORD *)a2 + 5) + 128LL);
      if ( v6 < 0x60u )
        v6 = 96;
    }
    v7 = 0;
    v8 = (__int64 *)((char *)a2 + 320);
    v9 = ((unsigned __int64)v6 << 16) / 0x78;
    v10 = this - a2;
    do
    {
      ++v7;
      *v8 = (__int64)(v5 * ((__int64)(v9 * *(__int64 *)((char *)v8 + v10 - 264)) >> 16)) >> 16;
      v11 = 229376 * *(__int64 *)((char *)v8++ + v10 - 304);
      *(v8 - 6) = v11 >> 16;
    }
    while ( v7 < 5 );
    v12 = 1;
    v13 = (_QWORD *)((char *)a2 + 288);
    do
    {
      v14 = *(v13 - 1);
      if ( *v13 == v14 )
      {
        v13[13] = 0LL;
        v13[9] = 0LL;
      }
      else
      {
        v15 = v13[4];
        v16 = ((v13[5] - v15) << 16) / (*v13 - v14);
        v13[9] = v16;
        v13[13] = v15 - ((v14 * v16) >> 16);
      }
      ++v12;
      ++v13;
    }
    while ( v12 < 5 );
  }
}
