/*
 * XREFs of ?BuildAccelerationCurve@CMouseAcceleration@@UEAAXPEAUtagMONITOR@@@Z @ 0x1C0055640
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C0058D64 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 */

void __fastcall CMouseAcceleration::BuildAccelerationCurve(CMouseAcceleration *this, struct tagMONITOR *a2)
{
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO *v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int16 v6; // cx
  unsigned int v7; // r9d
  unsigned __int128 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // r9d
  _QWORD *v14; // r8
  __int64 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // r10

  if ( *((_BYTE *)this + 8) )
  {
    v4 = (CMouseAcceleration *)((char *)this + 104);
    if ( (unsigned int)(*(_DWORD *)v4 - 1) <= 0x13 )
    {
      v5 = ((unsigned __int64)CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity(v4) << 16) / 0xA;
      v6 = *(_WORD *)(*((_QWORD *)a2 + 5) + 64LL);
      if ( v6 < 0x60u )
        v6 = 96;
      v7 = 0;
      v8 = ((unsigned __int64)v6 << 16) * (unsigned __int128)0x8888888888888889uLL;
      v9 = (__int64 *)((char *)a2 + 288);
      v10 = *((_QWORD *)&v8 + 1) >> 6;
      v11 = this - a2;
      do
      {
        ++v7;
        *v9 = (__int64)(v5 * ((v10 * *(__int64 *)((char *)v9 + v11 - 232)) >> 16)) >> 16;
        v12 = 229376 * *(__int64 *)((char *)v9++ + v11 - 272);
        *(v9 - 6) = v12 >> 16;
      }
      while ( v7 < 5 );
      v13 = 1;
      v14 = (_QWORD *)((char *)a2 + 360);
      do
      {
        v15 = *(v14 - 14);
        v16 = *(v14 - 13) - v15;
        if ( v16 )
        {
          v17 = *(v14 - 9);
          v18 = ((*(v14 - 8) - v17) << 16) / v16;
          v19 = v17 - ((v15 * v18) >> 16);
        }
        else
        {
          v19 = 0LL;
          v18 = 0LL;
        }
        *(v14 - 4) = v18;
        ++v13;
        *v14++ = v19;
      }
      while ( v13 < 5 );
    }
  }
}
