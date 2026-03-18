/*
 * XREFs of ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18002B720
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D960 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002B2D0 (-OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002B2F0 (-NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 *     ?SetRotationAngle@CComponentTransform3D@@AEAAJM@Z @ 0x18002BCF8 (-SetRotationAngle@CComponentTransform3D@@AEAAJM@Z.c)
 *     ?SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z @ 0x18002BD38 (-SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z.c)
 *     ?SetScale@CComponentTransform3D@@AEAAJMMM@Z @ 0x18002BDA4 (-SetScale@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z @ 0x18002BEA0 (-SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetCenter@CComponentTransform3D@@AEAAJMMM@Z @ 0x18002BF28 (-SetCenter@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetAnchor@CComponentTransform3D@@AEAAJMM@Z @ 0x18002C024 (-SetAnchor@CComponentTransform3D@@AEAAJMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@I@Z @ 0x1800C1020 (-FindElement@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComponentTransform3D::SetProperty(CComponentTransform3D *a1, int a2, int a3, float *a4)
{
  int v6; // eax
  unsigned int v7; // ebp
  __int128 v8; // xmm3
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 (__fastcall *v11)(__int64); // rax
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  __int64 v21; // r14
  __int64 v22; // r15
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  _DWORD *v25; // rdx
  __int64 (__fastcall *v26)(__int64, _DWORD *); // rax
  __int128 v27; // xmm1
  __int64 v28; // rcx
  __int128 v29; // xmm1
  __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  float v37; // xmm1_4
  int v38; // edx
  int v39; // eax
  int v40; // eax
  __int64 Element; // rax
  __int64 v42; // rcx
  unsigned int v43; // [rsp+20h] [rbp-88h]
  _QWORD v44[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v45; // [rsp+50h] [rbp-58h]
  __int128 v46; // [rsp+60h] [rbp-48h]
  __int128 v47; // [rsp+70h] [rbp-38h]
  __int128 v48; // [rsp+80h] [rbp-28h]

  switch ( a3 )
  {
    case 265:
      if ( a2 == 17 )
      {
        v6 = *((_DWORD *)a1 + 8);
        v7 = 0;
        v8 = *((_OWORD *)a4 + 1);
        v9 = *((_OWORD *)a4 + 2);
        v10 = *((_OWORD *)a4 + 3);
        *(_OWORD *)((char *)a1 + 216) = *(_OWORD *)a4;
        *(_OWORD *)((char *)a1 + 232) = v8;
        *(_OWORD *)((char *)a1 + 248) = v9;
        *(_OWORD *)((char *)a1 + 264) = v10;
        *((_DWORD *)a1 + 70) = 0;
        *((_DWORD *)a1 + 8) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)((v6 & 0xFE) + 2)) & 6;
        if ( (((unsigned __int8)v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)((v6 & 0xFE) + 2)) & 6) & 6) == 2 )
        {
          v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL);
          if ( v11 == CTransform3D::OnChanged
             ? CTransform3D::OnChanged((__int64)a1)
             : ((unsigned int (__fastcall *)(CComponentTransform3D *, _QWORD, _QWORD))v11)(a1, 0LL, 0LL) )
          {
            v19 = *((_QWORD *)a1 + 3);
            if ( (v19 & 2) != 0 )
              v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              LODWORD(v19) = v19 & 1;
            if ( (_DWORD)v19 )
            {
              v20 = 0LL;
              v21 = 4LL;
              v22 = (unsigned int)v19;
              do
              {
                v23 = *((_QWORD *)a1 + 3);
                if ( (v23 & 2) != 0 )
                  v24 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCuLL);
                else
                  v24 = *((_QWORD *)a1 + 3) & 1LL;
                if ( v20 >= v24 )
                {
                  v25 = 0LL;
                }
                else
                {
                  v25 = (_DWORD *)(v23 & 0xFFFFFFFFFFFFFFFCuLL);
                  if ( v24 != 1 )
                    v25 = *(_DWORD **)&v25[v21];
                }
                v26 = *(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a1 + 64LL);
                if ( v26 == CTransform3D::NotifyListenerOfChange )
                  CTransform3D::NotifyListenerOfChange((__int64)a1, v25);
                else
                  ((void (__fastcall *)(CComponentTransform3D *, _DWORD *, _QWORD, _QWORD))v26)(a1, v25, 0LL, 0LL);
                ++v20;
                v21 += 2LL;
                --v22;
              }
              while ( v22 );
            }
          }
        }
        (*(void (__fastcall **)(CComponentTransform3D *))(*(_QWORD *)a1 + 72LL))(a1);
        v13 = 0;
        v14 = *((_QWORD *)a1 + 6);
        *((_DWORD *)a1 + 8) ^= ((unsigned __int8)*((_DWORD *)a1 + 8) ^ (unsigned __int8)(2 * (*((_DWORD *)a1 + 8) >> 1)
                                                                                       - 2)) & 6;
        if ( v14 )
        {
          if ( *(_DWORD *)(v14 + 60) )
          {
            v15 = *((unsigned int *)a1 + 14);
            if ( (_DWORD)v15 )
            {
              if ( (*((_DWORD *)a1 + 16) & 0x20000) != 0 )
              {
                v27 = *((_OWORD *)a4 + 1);
                v28 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 1352LL);
                v45 = *(_OWORD *)a4;
                v46 = v27;
                v29 = *((_OWORD *)a4 + 3);
                v47 = *((_OWORD *)a4 + 2);
                v48 = v29;
                v30 = *(_QWORD *)(v28 + 56);
                v44[0] = *(unsigned int *)(v14 + 60);
                v44[1] = v15;
                v31 = CoreUICallSend(v30, v44, 2LL, 7LL, 7, &unk_1801D544E);
                v13 = v31;
                if ( v31 == -2018375675 )
                {
                  v13 = 0;
                }
                else if ( v31 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x1AFu);
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1A2u);
LABEL_12:
                  if ( (v13 & 0x80000000) == 0 )
                    return v13;
                  v43 = 207;
LABEL_68:
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v43);
                  return v13;
                }
              }
            }
          }
        }
        v16 = *((_QWORD *)a1 + 5);
        v17 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL);
        if ( v16 )
        {
          Element = CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FindElement(v16, 17LL);
          if ( Element )
          {
            if ( Element != -8 )
            {
              if ( *(_DWORD *)(Element + 32) )
              {
                do
                {
                  v42 = v7++;
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(Element + 8) + 8 * v42) + 216LL) = v17;
                }
                while ( v7 < *(_DWORD *)(Element + 32) );
              }
              *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 240LL) + 376LL) |= 2u;
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 2) + 560LL) + 104LL))(*(_QWORD *)(*((_QWORD *)a1 + 2) + 560LL));
            }
          }
        }
        goto LABEL_12;
      }
LABEL_67:
      v13 = -2147024809;
      v43 = 224;
      goto LABEL_68;
    case 52:
      switch ( a2 )
      {
        case 22:
          v32 = CComponentTransform3D::SetScale(a1, *a4, a4[1], a4[2]);
          v13 = v32;
          if ( v32 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0xB3u);
          break;
        case 18:
          v35 = CComponentTransform3D::SetCenter(a1, *a4, a4[1], a4[2]);
          v13 = v35;
          if ( v35 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0xABu);
          break;
        case 21:
          v34 = CComponentTransform3D::SetRotationAxis(a1, *a4, a4[1], a4[2]);
          v13 = v34;
          if ( v34 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0xAFu);
          break;
        default:
          goto LABEL_67;
      }
      break;
    case 18:
      v37 = *a4;
      v38 = a2 - 12;
      if ( v38 )
      {
        if ( v38 != 1 )
          goto LABEL_67;
        v39 = CComponentTransform3D::SetRotationAngle(a1, v37 * 0.017453292);
        v13 = v39;
        if ( v39 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x91u);
      }
      else
      {
        v40 = CComponentTransform3D::SetRotationAngle(a1, v37);
        v13 = v40;
        if ( v40 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x8Du);
      }
      break;
    case 35:
      if ( a2 != 19 )
        goto LABEL_67;
      v36 = CComponentTransform3D::SetAnchor(a1, *a4, a4[1]);
      v13 = v36;
      if ( v36 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x9Eu);
      break;
    default:
      if ( a3 != 71 || a2 != 20 )
        goto LABEL_67;
      v33 = CComponentTransform3D::SetOrientation(a1, *a4, a4[1], a4[2], a4[3]);
      v13 = v33;
      if ( v33 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0xC1u);
      break;
  }
  return v13;
}
