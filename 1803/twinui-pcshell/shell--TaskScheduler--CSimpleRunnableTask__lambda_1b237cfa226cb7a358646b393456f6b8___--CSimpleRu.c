/*
 * XREFs of shell::TaskScheduler::CSimpleRunnableTask__lambda_1b237cfa226cb7a358646b393456f6b8___::CSimpleRunnableTask__lambda_1b237cfa226cb7a358646b393456f6b8___ @ 0x1802669E4
 * Callers:
 *     shell::TaskScheduler::AddTask__lambda_1b237cfa226cb7a358646b393456f6b8___ @ 0x1802666C8 (shell--TaskScheduler--AddTask__lambda_1b237cfa226cb7a358646b393456f6b8___.c)
 * Callees:
 *     ??0CMarshaledInterface@@QEAA@AEBV0@@Z @ 0x1800F8A74 (--0CMarshaledInterface@@QEAA@AEBV0@@Z.c)
 *     ??0CRunnableTask@@IEAA@W4RUN_TASK_FLAGS@@@Z @ 0x180266BBC (--0CRunnableTask@@IEAA@W4RUN_TASK_FLAGS@@@Z.c)
 */

_QWORD *__fastcall shell::TaskScheduler::CSimpleRunnableTask__lambda_1b237cfa226cb7a358646b393456f6b8___::CSimpleRunnableTask__lambda_1b237cfa226cb7a358646b393456f6b8___(
        _QWORD *a1,
        __int64 a2)
{
  CRunnableTask::CRunnableTask();
  *a1 = &off_18033BE40;
  a1[1] = &CRunnableTask::`vftable'{for `IServiceProvider'};
  a1[2] = &CRunnableTask::`vftable'{for `IQueryContinue'};
  a1[3] = &CRunnableTask::`vftable'{for `IObjectWithCancelEvent'};
  a1[4] = &CRunnableTask::`vftable'{for `ITestRunnableTask'};
  CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)(a1 + 9), (const struct CMarshaledInterface *)a2);
  CMarshaledInterface::CMarshaledInterface(
    (CMarshaledInterface *)(a1 + 10),
    (const struct CMarshaledInterface *)(a2 + 8));
  return a1;
}
