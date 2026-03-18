/*
 * XREFs of ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C0116134
 * Callers:
 *     RIMCreatePointerDeviceDeadzone @ 0x1C0104EE0 (RIMCreatePointerDeviceDeadzone.c)
 * Callees:
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C00076F4 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     ?SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ @ 0x1C01166CC (-SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ.c)
 */

__int64 __fastcall RIMDeadzone::Initialize(RIMDeadzone *this, const struct tagRIMDEADZONE *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  __int64 v7; // r11
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rax
  void *v11; // rax
  unsigned int v12; // r14d
  __int64 v13; // rbp
  __int64 v14; // rax
  unsigned int v15; // r9d
  __int64 v16; // r8
  __int128 v18; // [rsp+20h] [rbp-28h]
  __int64 v19; // [rsp+30h] [rbp-18h]

  ++*((_DWORD *)this + 1);
  v2 = 0;
  if ( !a2 )
    goto LABEL_24;
  if ( *(_DWORD *)a2 == 1 )
  {
    if ( *((_DWORD *)a2 + 4) >= *((_DWORD *)a2 + 2) && *((_DWORD *)a2 + 5) >= *((_DWORD *)a2 + 3) )
    {
      *((_DWORD *)this + 4) = 1;
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 8);
      return v2;
    }
LABEL_24:
    v2 = -1073741811;
    goto LABEL_25;
  }
  if ( *(_DWORD *)a2 != 2 )
    goto LABEL_24;
  v5 = *((_DWORD *)a2 + 4);
  v6 = 0;
  if ( v5 )
  {
    v7 = *((_QWORD *)a2 + 1);
    do
    {
      v8 = _mm_cvtsi128_si32(*(__m128i *)(v7 + 24LL * v6));
      v18 = *(_OWORD *)(v7 + 24LL * v6);
      v19 = *(_QWORD *)(v7 + 24LL * v6 + 16);
      if ( v8 > 0x168 || DWORD1(v18) > 0x168 || v8 == DWORD1(v18) )
        goto LABEL_24;
      v9 = 0;
      if ( (_DWORD)v19 )
      {
        while ( *(_DWORD *)(*((_QWORD *)&v18 + 1) + 8LL * v9 + 4) >= *(_DWORD *)(*((_QWORD *)&v18 + 1) + 8LL * v9) )
        {
          if ( ++v9 >= (unsigned int)v19 )
            goto LABEL_12;
        }
        goto LABEL_24;
      }
LABEL_12:
      ;
    }
    while ( ++v6 < v5 );
  }
  *((_DWORD *)this + 4) = 2;
  v10 = *((unsigned int *)a2 + 4);
  *((_DWORD *)this + 8) = v10;
  v11 = Win32AllocPoolZInit(24 * v10, 1853506642LL);
  *((_QWORD *)this + 3) = v11;
  if ( !v11 )
  {
LABEL_14:
    v2 = -1073741801;
LABEL_25:
    RIMDeadzone::Release((DeadzonePalmTelemetry **)this);
    return v2;
  }
  v12 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    do
    {
      v13 = 3LL * v12;
      *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v13) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL * v12);
      *(_DWORD *)(*((_QWORD *)this + 3) + 8 * v13 + 16) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 24LL * v12 + 16);
      *(_QWORD *)(*((_QWORD *)this + 3) + 24LL * v12 + 8) = Win32AllocPoolZInit(
                                                              8LL
                                                            * *(unsigned int *)(*((_QWORD *)this + 3) + 24LL * v12 + 16),
                                                              1853506642LL);
      v14 = *((_QWORD *)this + 3);
      if ( !*(_QWORD *)(v14 + 24LL * v12 + 8) )
        goto LABEL_14;
      v15 = 0;
      if ( *(_DWORD *)(v14 + 24LL * v12 + 16) )
      {
        do
        {
          v16 = v15++;
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL * v12 + 8) + 8 * v16) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL * v12 + 8)
                                                                                                 + 8 * v16);
        }
        while ( v15 < *(_DWORD *)(*((_QWORD *)this + 3) + 24LL * v12 + 16) );
      }
    }
    while ( ++v12 < *((_DWORD *)this + 8) );
  }
  RIMDeadzone::SetDeadzonePalmTelemetry(this);
  return v2;
}
